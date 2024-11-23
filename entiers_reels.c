#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *chiffre[]={"zero","un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf", "dix-", "onze", "douze", "treize", "quatorze", "quinze", "seize", "dix-sept", "dix-huit", "dix-neuf", "vingt", "vingt-un", "vingt-deux", "vingt-trois", "vingt-quatre", "vingt-cinq", "vingt-six", "vingt-sept", "vingt-huit", "vingt-neuf", "trente", "trente-un", "trente-deux", "trente-trois", "trente-quatre", "trente-cinq", "trente-six", "trente-sept", "trente-huit", "trente-neuf", "quarante", "quarante-un", "quarante-deux", "quarante-trois", "quarante-quatre", "quarante-cinq", "quarante-six", "quarante-sept", "quarante-huit", "quarante-neuf", "cinquante", "cinquante-un", "cinquante-deux", "cinquante-trois", "cinquante-quatre", "cinquante-cinq", "cinquante-six", "cinquante-sept", "cinquante-huit", "cinquante-neuf", "soixante", "soixante-un", "soixante-deux", "soixante-trois", "soixante-quatre", "soixante-cinq", "soixante-six", "soixante-sept", "soixante-huit", "soixante-neuf", "soixante-dix-", "soixante et onze", "soixante-douze", "soixante-treize", "soixante-quatorze", "soixante-quinze", "soixante-seize", "soixante-dix-sept", "soixante-dix-huit", "soixante-dix-neuf", "quatre-vingt", "quatre-vingt-un", "quatre-vingt-deux", "quatre-vingt-trois", "quatre-vingt-quatre", "quatre-vingt-cinq", "quatre-vingt-six", "quatre-vingt-sept", "quatre-vingt-huit", "quatre-vingt-neuf", "quatre-vingt-dix-", "quatre-vingt-onze", "quatre-vingt-douze", "quatre-vingt-treize", "quatre-vingt-quatorze", "quatre-vingt-quinze", "quatre-vingt-seize", "quatre-vingt-dix-sept", "quatre-vingt-dix-huit", "quatre-vingt-dix-neuf", "un cent", "un cent un", "un cent deux", "un cent trois", "un cent quatre", "un cent cinq", "un cent six", "un cent sept", "un cent huit", "un cent neuf", "un cent dix-", "un cent onze", "un cent douze", "un cent treize", "un cent quatorze", "un cent quinze", "un cent seize", "un cent dix-sept", "un cent dix-huit", "un cent dix-neuf", "un cent vingt", "un cent vingt-un", "un cent vingt-deux", "un cent vingt-trois", "un cent vingt-quatre", "un cent vingt-cinq", "un cent vingt-six", "un cent vingt-sept", "un cent vingt-huit", "un cent vingt-neuf", "un cent trente", "un cent trente-un", "un cent trente-deux", "un cent trente-trois", "un cent trente-quatre", "un cent trente-cinq", "un cent trente-six", "un cent trente-sept", "un cent trente-huit", "un cent trente-neuf", "un cent quarante", "un cent quarante-un", "un cent quarante-deux", "un cent quarante-trois", "un cent quarante-quatre", "un cent quarante-cinq", "un cent quarante-six", "un cent quarante-sept", "un cent quarante-huit", "un cent quarante-neuf", "un cent cinquante", "un cent cinquante-un", "un cent cinquante-deux", "un cent cinquante-trois", "un cent cinquante-quatre", "un cent cinquante-cinq", "un cent cinquante-six", "un cent cinquante-sept", "un cent cinquante-huit", "un cent cinquante-neuf", "un cent soixante", "un cent soixante-un", "un cent soixante-deux", "un cent soixante-trois", "un cent soixante-quatre", "un cent soixante-cinq", "un cent soixante-six", "un cent soixante-sept", "un cent soixante-huit", "un cent soixante-neuf", "un cent soixante-dix-", "un cent soixante et onze", "un cent soixante-douze", "un cent soixante-treize", "un cent soixante-quatorze", "un cent soixante-quinze", "un cent soixante-seize", "un cent soixante-dix-sept", "un cent soixante-dix-huit", "un cent soixante-dix-neuf", "un cent quatre-vingt", "un cent quatre-vingt-un", "un cent quatre-vingt-deux", "un cent quatre-vingt-trois", "un cent quatre-vingt-quatre", "un cent quatre-vingt-cinq", "un cent quatre-vingt-six", "un cent quatre-vingt-sept", "un cent quatre-vingt-huit", "un cent quatre-vingt-neuf", "un cent quatre-vingt-dix-", "un cent quatre-vingt-onze", "un cent quatre-vingt-douze", "un cent quatre-vingt-treize", "un cent quatre-vingt-quatorze", "un cent quatre-vingt-quinze", "un cent quatre-vingt-seize", "un cent quatre-vingt-dix-sept", "un cent quatre-vingt-dix-huit", "un cent quatre-vingt-dix-neuf", "deux cents", "deux cent un", "deux cent deux", "deux cent trois", "deux cent quatre", "deux cent cinq", "deux cent six", "deux cent sept", "deux cent huit", "deux cent neuf", "deux cent dix-", "deux cent onze", "deux cent douze", "deux cent treize", "deux cent quatorze", "deux cent quinze", "deux cent seize", "deux cent dix-sept", "deux cent dix-huit", "deux cent dix-neuf", "deux cent vingt", "deux cent vingt-un", "deux cent vingt-deux", "deux cent vingt-trois", "deux cent vingt-quatre", "deux cent vingt-cinq", "deux cent vingt-six", "deux cent vingt-sept", "deux cent vingt-huit", "deux cent vingt-neuf", "deux cent trente", "deux cent trente-un", "deux cent trente-deux", "deux cent trente-trois", "deux cent trente-quatre", "deux cent trente-cinq", "deux cent trente-six", "deux cent trente-sept", "deux cent trente-huit", "deux cent trente-neuf", "deux cent quarante", "deux cent quarante-un", "deux cent quarante-deux", "deux cent quarante-trois", "deux cent quarante-quatre", "deux cent quarante-cinq", "deux cent quarante-six", "deux cent quarante-sept", "deux cent quarante-huit", "deux cent quarante-neuf", "deux cent cinquante", "deux cent cinquante-un", "deux cent cinquante-deux", "deux cent cinquante-trois", "deux cent cinquante-quatre", "deux cent cinquante-cinq", "deux cent cinquante-six", "deux cent cinquante-sept", "deux cent cinquante-huit", "deux cent cinquante-neuf", "deux cent soixante", "deux cent soixante-un", "deux cent soixante-deux", "deux cent soixante-trois", "deux cent soixante-quatre", "deux cent soixante-cinq", "deux cent soixante-six", "deux cent soixante-sept", "deux cent soixante-huit", "deux cent soixante-neuf", "deux cent soixante-dix-", "deux cent soixante et onze", "deux cent soixante-douze", "deux cent soixante-treize", "deux cent soixante-quatorze", "deux cent soixante-quinze", "deux cent soixante-seize", "deux cent soixante-dix-sept", "deux cent soixante-dix-huit", "deux cent soixante-dix-neuf", "deux cent quatre-vingt", "deux cent quatre-vingt-un", "deux cent quatre-vingt-deux", "deux cent quatre-vingt-trois", "deux cent quatre-vingt-quatre", "deux cent quatre-vingt-cinq", "deux cent quatre-vingt-six", "deux cent quatre-vingt-sept", "deux cent quatre-vingt-huit", "deux cent quatre-vingt-neuf", "deux cent quatre-vingt-dix-", "deux cent quatre-vingt-onze", "deux cent quatre-vingt-douze", "deux cent quatre-vingt-treize", "deux cent quatre-vingt-quatorze", "deux cent quatre-vingt-quinze", "deux cent quatre-vingt-seize", "deux cent quatre-vingt-dix-sept", "deux cent quatre-vingt-dix-huit", "deux cent quatre-vingt-dix-neuf", "trois cents", "trois cent un", "trois cent deux", "trois cent trois", "trois cent quatre", "trois cent cinq", "trois cent six", "trois cent sept", "trois cent huit", "trois cent neuf", "trois cent dix-", "trois cent onze", "trois cent douze", "trois cent treize", "trois cent quatorze", "trois cent quinze", "trois cent seize", "trois cent dix-sept", "trois cent dix-huit", "trois cent dix-neuf", "trois cent vingt", "trois cent vingt-un", "trois cent vingt-deux", "trois cent vingt-trois", "trois cent vingt-quatre", "trois cent vingt-cinq", "trois cent vingt-six", "trois cent vingt-sept", "trois cent vingt-huit", "trois cent vingt-neuf", "trois cent trente", "trois cent trente-un", "trois cent trente-deux", "trois cent trente-trois", "trois cent trente-quatre", "trois cent trente-cinq", "trois cent trente-six", "trois cent trente-sept", "trois cent trente-huit", "trois cent trente-neuf", "trois cent quarante", "trois cent quarante-un", "trois cent quarante-deux", "trois cent quarante-trois", "trois cent quarante-quatre", "trois cent quarante-cinq", "trois cent quarante-six", "trois cent quarante-sept", "trois cent quarante-huit", "trois cent quarante-neuf", "trois cent cinquante", "trois cent cinquante-un", "trois cent cinquante-deux", "trois cent cinquante-trois", "trois cent cinquante-quatre", "trois cent cinquante-cinq", "trois cent cinquante-six", "trois cent cinquante-sept", "trois cent cinquante-huit", "trois cent cinquante-neuf", "trois cent soixante", "trois cent soixante-un", "trois cent soixante-deux", "trois cent soixante-trois", "trois cent soixante-quatre", "trois cent soixante-cinq", "trois cent soixante-six", "trois cent soixante-sept", "trois cent soixante-huit", "trois cent soixante-neuf", "trois cent soixante-dix-", "trois cent soixante et onze", "trois cent soixante-douze", "trois cent soixante-treize", "trois cent soixante-quatorze", "trois cent soixante-quinze", "trois cent soixante-seize", "trois cent soixante-dix-sept", "trois cent soixante-dix-huit", "trois cent soixante-dix-neuf", "trois cent quatre-vingt", "trois cent quatre-vingt-un", "trois cent quatre-vingt-deux", "trois cent quatre-vingt-trois", "trois cent quatre-vingt-quatre", "trois cent quatre-vingt-cinq", "trois cent quatre-vingt-six", "trois cent quatre-vingt-sept", "trois cent quatre-vingt-huit", "trois cent quatre-vingt-neuf", "trois cent quatre-vingt-dix-", "trois cent quatre-vingt-onze", "trois cent quatre-vingt-douze", "trois cent quatre-vingt-treize", "trois cent quatre-vingt-quatorze", "trois cent quatre-vingt-quinze", "trois cent quatre-vingt-seize", "trois cent quatre-vingt-dix-sept", "trois cent quatre-vingt-dix-huit", "trois cent quatre-vingt-dix-neuf", "quatre cents", "quatre cent un", "quatre cent deux", "quatre cent trois", "quatre cent quatre", "quatre cent cinq", "quatre cent six", "quatre cent sept", "quatre cent huit", "quatre cent neuf", "quatre cent dix-", "quatre cent onze", "quatre cent douze", "quatre cent treize", "quatre cent quatorze", "quatre cent quinze", "quatre cent seize", "quatre cent dix-sept", "quatre cent dix-huit", "quatre cent dix-neuf", "quatre cent vingt", "quatre cent vingt-un", "quatre cent vingt-deux", "quatre cent vingt-trois", "quatre cent vingt-quatre", "quatre cent vingt-cinq", "quatre cent vingt-six", "quatre cent vingt-sept", "quatre cent vingt-huit", "quatre cent vingt-neuf", "quatre cent trente", "quatre cent trente-un", "quatre cent trente-deux", "quatre cent trente-trois", "quatre cent trente-quatre", "quatre cent trente-cinq", "quatre cent trente-six", "quatre cent trente-sept", "quatre cent trente-huit", "quatre cent trente-neuf", "quatre cent quarante", "quatre cent quarante-un", "quatre cent quarante-deux", "quatre cent quarante-trois", "quatre cent quarante-quatre", "quatre cent quarante-cinq", "quatre cent quarante-six", "quatre cent quarante-sept", "quatre cent quarante-huit", "quatre cent quarante-neuf", "quatre cent cinquante", "quatre cent cinquante-un", "quatre cent cinquante-deux", "quatre cent cinquante-trois", "quatre cent cinquante-quatre", "quatre cent cinquante-cinq", "quatre cent cinquante-six", "quatre cent cinquante-sept", "quatre cent cinquante-huit", "quatre cent cinquante-neuf", "quatre cent soixante", "quatre cent soixante-un", "quatre cent soixante-deux", "quatre cent soixante-trois", "quatre cent soixante-quatre", "quatre cent soixante-cinq", "quatre cent soixante-six", "quatre cent soixante-sept", "quatre cent soixante-huit", "quatre cent soixante-neuf", "quatre cent soixante-dix-", "quatre cent soixante et onze", "quatre cent soixante-douze", "quatre cent soixante-treize", "quatre cent soixante-quatorze", "quatre cent soixante-quinze", "quatre cent soixante-seize", "quatre cent soixante-dix-sept", "quatre cent soixante-dix-huit", "quatre cent soixante-dix-neuf", "quatre cent quatre-vingt", "quatre cent quatre-vingt-un", "quatre cent quatre-vingt-deux", "quatre cent quatre-vingt-trois", "quatre cent quatre-vingt-quatre", "quatre cent quatre-vingt-cinq", "quatre cent quatre-vingt-six", "quatre cent quatre-vingt-sept", "quatre cent quatre-vingt-huit", "quatre cent quatre-vingt-neuf", "quatre cent quatre-vingt-dix-", "quatre cent quatre-vingt-onze", "quatre cent quatre-vingt-douze", "quatre cent quatre-vingt-treize", "quatre cent quatre-vingt-quatorze", "quatre cent quatre-vingt-quinze", "quatre cent quatre-vingt-seize", "quatre cent quatre-vingt-dix-sept", "quatre cent quatre-vingt-dix-huit", "quatre cent quatre-vingt-dix-neuf", "cinq cents", "cinq cent un", "cinq cent deux", "cinq cent trois", "cinq cent quatre", "cinq cent cinq", "cinq cent six", "cinq cent sept", "cinq cent huit", "cinq cent neuf", "cinq cent dix-", "cinq cent onze", "cinq cent douze", "cinq cent treize", "cinq cent quatorze", "cinq cent quinze", "cinq cent seize", "cinq cent dix-sept", "cinq cent dix-huit", "cinq cent dix-neuf", "cinq cent vingt", "cinq cent vingt-un", "cinq cent vingt-deux", "cinq cent vingt-trois", "cinq cent vingt-quatre", "cinq cent vingt-cinq", "cinq cent vingt-six", "cinq cent vingt-sept", "cinq cent vingt-huit", "cinq cent vingt-neuf", "cinq cent trente", "cinq cent trente-un", "cinq cent trente-deux", "cinq cent trente-trois", "cinq cent trente-quatre", "cinq cent trente-cinq", "cinq cent trente-six", "cinq cent trente-sept", "cinq cent trente-huit", "cinq cent trente-neuf", "cinq cent quarante", "cinq cent quarante-un", "cinq cent quarante-deux", "cinq cent quarante-trois", "cinq cent quarante-quatre", "cinq cent quarante-cinq", "cinq cent quarante-six", "cinq cent quarante-sept", "cinq cent quarante-huit", "cinq cent quarante-neuf", "cinq cent cinquante", "cinq cent cinquante-un", "cinq cent cinquante-deux", "cinq cent cinquante-trois", "cinq cent cinquante-quatre", "cinq cent cinquante-cinq", "cinq cent cinquante-six", "cinq cent cinquante-sept", "cinq cent cinquante-huit", "cinq cent cinquante-neuf", "cinq cent soixante", "cinq cent soixante-un", "cinq cent soixante-deux", "cinq cent soixante-trois", "cinq cent soixante-quatre", "cinq cent soixante-cinq", "cinq cent soixante-six", "cinq cent soixante-sept", "cinq cent soixante-huit", "cinq cent soixante-neuf", "cinq cent soixante-dix-", "cinq cent soixante et onze", "cinq cent soixante-douze", "cinq cent soixante-treize", "cinq cent soixante-quatorze", "cinq cent soixante-quinze", "cinq cent soixante-seize", "cinq cent soixante-dix-sept", "cinq cent soixante-dix-huit", "cinq cent soixante-dix-neuf", "cinq cent quatre-vingt", "cinq cent quatre-vingt-un", "cinq cent quatre-vingt-deux", "cinq cent quatre-vingt-trois", "cinq cent quatre-vingt-quatre", "cinq cent quatre-vingt-cinq", "cinq cent quatre-vingt-six", "cinq cent quatre-vingt-sept", "cinq cent quatre-vingt-huit", "cinq cent quatre-vingt-neuf", "cinq cent quatre-vingt-dix-", "cinq cent quatre-vingt-onze", "cinq cent quatre-vingt-douze", "cinq cent quatre-vingt-treize", "cinq cent quatre-vingt-quatorze", "cinq cent quatre-vingt-quinze", "cinq cent quatre-vingt-seize", "cinq cent quatre-vingt-dix-sept", "cinq cent quatre-vingt-dix-huit", "cinq cent quatre-vingt-dix-neuf", "six cents", "six cent un", "six cent deux", "six cent trois", "six cent quatre", "six cent cinq", "six cent six", "six cent sept", "six cent huit", "six cent neuf", "six cent dix-", "six cent onze", "six cent douze", "six cent treize", "six cent quatorze", "six cent quinze", "six cent seize", "six cent dix-sept", "six cent dix-huit", "six cent dix-neuf", "six cent vingt", "six cent vingt-un", "six cent vingt-deux", "six cent vingt-trois", "six cent vingt-quatre", "six cent vingt-cinq", "six cent vingt-six", "six cent vingt-sept", "six cent vingt-huit", "six cent vingt-neuf", "six cent trente", "six cent trente-un", "six cent trente-deux", "six cent trente-trois", "six cent trente-quatre", "six cent trente-cinq", "six cent trente-six", "six cent trente-sept", "six cent trente-huit", "six cent trente-neuf", "six cent quarante", "six cent quarante-un", "six cent quarante-deux", "six cent quarante-trois", "six cent quarante-quatre", "six cent quarante-cinq", "six cent quarante-six", "six cent quarante-sept", "six cent quarante-huit", "six cent quarante-neuf", "six cent cinquante", "six cent cinquante-un", "six cent cinquante-deux", "six cent cinquante-trois", "six cent cinquante-quatre", "six cent cinquante-cinq", "six cent cinquante-six", "six cent cinquante-sept", "six cent cinquante-huit", "six cent cinquante-neuf", "six cent soixante", "six cent soixante-un", "six cent soixante-deux", "six cent soixante-trois", "six cent soixante-quatre", "six cent soixante-cinq", "six cent soixante-six", "six cent soixante-sept", "six cent soixante-huit", "six cent soixante-neuf", "six cent soixante-dix-", "six cent soixante et onze", "six cent soixante-douze", "six cent soixante-treize", "six cent soixante-quatorze", "six cent soixante-quinze", "six cent soixante-seize", "six cent soixante-dix-sept", "six cent soixante-dix-huit", "six cent soixante-dix-neuf", "six cent quatre-vingt", "six cent quatre-vingt-un", "six cent quatre-vingt-deux", "six cent quatre-vingt-trois", "six cent quatre-vingt-quatre", "six cent quatre-vingt-cinq", "six cent quatre-vingt-six", "six cent quatre-vingt-sept", "six cent quatre-vingt-huit", "six cent quatre-vingt-neuf", "six cent quatre-vingt-dix-", "six cent quatre-vingt-onze", "six cent quatre-vingt-douze", "six cent quatre-vingt-treize", "six cent quatre-vingt-quatorze", "six cent quatre-vingt-quinze", "six cent quatre-vingt-seize", "six cent quatre-vingt-dix-sept", "six cent quatre-vingt-dix-huit", "six cent quatre-vingt-dix-neuf", "sept cents", "sept cent un", "sept cent deux", "sept cent trois", "sept cent quatre", "sept cent cinq", "sept cent six", "sept cent sept", "sept cent huit", "sept cent neuf", "sept cent dix-", "sept cent onze", "sept cent douze", "sept cent treize", "sept cent quatorze", "sept cent quinze", "sept cent seize", "sept cent dix-sept", "sept cent dix-huit", "sept cent dix-neuf", "sept cent vingt", "sept cent vingt-un", "sept cent vingt-deux", "sept cent vingt-trois", "sept cent vingt-quatre", "sept cent vingt-cinq", "sept cent vingt-six", "sept cent vingt-sept", "sept cent vingt-huit", "sept cent vingt-neuf", "sept cent trente", "sept cent trente-un", "sept cent trente-deux", "sept cent trente-trois", "sept cent trente-quatre", "sept cent trente-cinq", "sept cent trente-six", "sept cent trente-sept", "sept cent trente-huit", "sept cent trente-neuf", "sept cent quarante", "sept cent quarante-un", "sept cent quarante-deux", "sept cent quarante-trois", "sept cent quarante-quatre", "sept cent quarante-cinq", "sept cent quarante-six", "sept cent quarante-sept", "sept cent quarante-huit", "sept cent quarante-neuf", "sept cent cinquante", "sept cent cinquante-un", "sept cent cinquante-deux", "sept cent cinquante-trois", "sept cent cinquante-quatre", "sept cent cinquante-cinq", "sept cent cinquante-six", "sept cent cinquante-sept", "sept cent cinquante-huit", "sept cent cinquante-neuf", "sept cent soixante", "sept cent soixante-un", "sept cent soixante-deux", "sept cent soixante-trois", "sept cent soixante-quatre", "sept cent soixante-cinq", "sept cent soixante-six", "sept cent soixante-sept", "sept cent soixante-huit", "sept cent soixante-neuf", "sept cent soixante-dix-", "sept cent soixante et onze", "sept cent soixante-douze", "sept cent soixante-treize", "sept cent soixante-quatorze", "sept cent soixante-quinze", "sept cent soixante-seize", "sept cent soixante-dix-sept", "sept cent soixante-dix-huit", "sept cent soixante-dix-neuf", "sept cent quatre-vingt", "sept cent quatre-vingt-un", "sept cent quatre-vingt-deux", "sept cent quatre-vingt-trois", "sept cent quatre-vingt-quatre", "sept cent quatre-vingt-cinq", "sept cent quatre-vingt-six", "sept cent quatre-vingt-sept", "sept cent quatre-vingt-huit", "sept cent quatre-vingt-neuf", "sept cent quatre-vingt-dix-", "sept cent quatre-vingt-onze", "sept cent quatre-vingt-douze", "sept cent quatre-vingt-treize", "sept cent quatre-vingt-quatorze", "sept cent quatre-vingt-quinze", "sept cent quatre-vingt-seize", "sept cent quatre-vingt-dix-sept", "sept cent quatre-vingt-dix-huit", "sept cent quatre-vingt-dix-neuf", "huit cents", "huit cent un", "huit cent deux", "huit cent trois", "huit cent quatre", "huit cent cinq", "huit cent six", "huit cent sept", "huit cent huit", "huit cent neuf", "huit cent dix-", "huit cent onze", "huit cent douze", "huit cent treize", "huit cent quatorze", "huit cent quinze", "huit cent seize", "huit cent dix-sept", "huit cent dix-huit", "huit cent dix-neuf", "huit cent vingt", "huit cent vingt-un", "huit cent vingt-deux", "huit cent vingt-trois", "huit cent vingt-quatre", "huit cent vingt-cinq", "huit cent vingt-six", "huit cent vingt-sept", "huit cent vingt-huit", "huit cent vingt-neuf", "huit cent trente", "huit cent trente-un", "huit cent trente-deux", "huit cent trente-trois", "huit cent trente-quatre", "huit cent trente-cinq", "huit cent trente-six", "huit cent trente-sept", "huit cent trente-huit", "huit cent trente-neuf", "huit cent quarante", "huit cent quarante-un", "huit cent quarante-deux", "huit cent quarante-trois", "huit cent quarante-quatre", "huit cent quarante-cinq", "huit cent quarante-six", "huit cent quarante-sept", "huit cent quarante-huit", "huit cent quarante-neuf", "huit cent cinquante", "huit cent cinquante-un", "huit cent cinquante-deux", "huit cent cinquante-trois", "huit cent cinquante-quatre", "huit cent cinquante-cinq", "huit cent cinquante-six", "huit cent cinquante-sept", "huit cent cinquante-huit", "huit cent cinquante-neuf", "huit cent soixante", "huit cent soixante-un", "huit cent soixante-deux", "huit cent soixante-trois", "huit cent soixante-quatre", "huit cent soixante-cinq", "huit cent soixante-six", "huit cent soixante-sept", "huit cent soixante-huit", "huit cent soixante-neuf", "huit cent soixante-dix-", "huit cent soixante et onze", "huit cent soixante-douze", "huit cent soixante-treize", "huit cent soixante-quatorze", "huit cent soixante-quinze", "huit cent soixante-seize", "huit cent soixante-dix-sept", "huit cent soixante-dix-huit", "huit cent soixante-dix-neuf", "huit cent quatre-vingt", "huit cent quatre-vingt-un", "huit cent quatre-vingt-deux", "huit cent quatre-vingt-trois", "huit cent quatre-vingt-quatre", "huit cent quatre-vingt-cinq", "huit cent quatre-vingt-six", "huit cent quatre-vingt-sept", "huit cent quatre-vingt-huit", "huit cent quatre-vingt-neuf", "huit cent quatre-vingt-dix-", "huit cent quatre-vingt-onze", "huit cent quatre-vingt-douze", "huit cent quatre-vingt-treize", "huit cent quatre-vingt-quatorze", "huit cent quatre-vingt-quinze", "huit cent quatre-vingt-seize", "huit cent quatre-vingt-dix-sept", "huit cent quatre-vingt-dix-huit", "huit cent quatre-vingt-dix-neuf", "neuf cents", "neuf cent un", "neuf cent deux", "neuf cent trois", "neuf cent quatre", "neuf cent cinq", "neuf cent six", "neuf cent sept", "neuf cent huit", "neuf cent neuf", "neuf cent dix-", "neuf cent onze", "neuf cent douze", "neuf cent treize", "neuf cent quatorze", "neuf cent quinze", "neuf cent seize", "neuf cent dix-sept", "neuf cent dix-huit", "neuf cent dix-neuf", "neuf cent vingt", "neuf cent vingt-un", "neuf cent vingt-deux", "neuf cent vingt-trois", "neuf cent vingt-quatre", "neuf cent vingt-cinq", "neuf cent vingt-six", "neuf cent vingt-sept", "neuf cent vingt-huit", "neuf cent vingt-neuf", "neuf cent trente", "neuf cent trente-un", "neuf cent trente-deux", "neuf cent trente-trois", "neuf cent trente-quatre", "neuf cent trente-cinq", "neuf cent trente-six", "neuf cent trente-sept", "neuf cent trente-huit", "neuf cent trente-neuf", "neuf cent quarante", "neuf cent quarante-un", "neuf cent quarante-deux", "neuf cent quarante-trois", "neuf cent quarante-quatre", "neuf cent quarante-cinq", "neuf cent quarante-six", "neuf cent quarante-sept", "neuf cent quarante-huit", "neuf cent quarante-neuf", "neuf cent cinquante", "neuf cent cinquante-un", "neuf cent cinquante-deux", "neuf cent cinquante-trois", "neuf cent cinquante-quatre", "neuf cent cinquante-cinq", "neuf cent cinquante-six", "neuf cent cinquante-sept", "neuf cent cinquante-huit", "neuf cent cinquante-neuf", "neuf cent soixante", "neuf cent soixante-un", "neuf cent soixante-deux", "neuf cent soixante-trois", "neuf cent soixante-quatre", "neuf cent soixante-cinq", "neuf cent soixante-six", "neuf cent soixante-sept", "neuf cent soixante-huit", "neuf cent soixante-neuf", "neuf cent soixante-dix-", "neuf cent soixante et onze", "neuf cent soixante-douze", "neuf cent soixante-treize", "neuf cent soixante-quatorze", "neuf cent soixante-quinze", "neuf cent soixante-seize", "neuf cent soixante-dix-sept", "neuf cent soixante-dix-huit", "neuf cent soixante-dix-neuf", "neuf cent quatre-vingt", "neuf cent quatre-vingt-un", "neuf cent quatre-vingt-deux", "neuf cent quatre-vingt-trois", "neuf cent quatre-vingt-quatre", "neuf cent quatre-vingt-cinq", "neuf cent quatre-vingt-six", "neuf cent quatre-vingt-sept", "neuf cent quatre-vingt-huit", "neuf cent quatre-vingt-neuf", "neuf cent quatre-vingt-dix-", "neuf cent quatre-vingt-onze", "neuf cent quatre-vingt-douze", "neuf cent quatre-vingt-treize", "neuf cent quatre-vingt-quatorze", "neuf cent quatre-vingt-quinze", "neuf cent quatre-vingt-seize", "neuf cent quatre-vingt-dix-sept", "neuf cent quatre-vingt-dix-huit", "neuf cent quatre-vingt-dix-neuf"
};


// FONCTION QUI DETECTE LE TYPE DE NOMBRE
char *Type_Nombre(char ch[]) {
    int i=0,k=0;

    while (ch[i]!='\0') {
        if (ch[i++]=='.') {
            k++;
        }
    }
    if (k==0) {
        return "entier" ;
    }
    else {
        return "reel";
    }

}


char *Pos_Neg(char ch1[]) {
if(ch1[0]=='-')
    return "negative";
    else
        return "positive";

}

// PROCEDURE POUR LES ENTIERS
void entier_to_lettre(char ch2[]) {
    char*z=Pos_Neg(ch2);
    char ch1[100];
    if (z=="negative") {
        int e=0,f=0;

        while (ch2[e]!='\0' ) {
            ch1[f++]=ch2[e+1];
            e++;
        }
    }

        else {
            int e=0,f=0;

            while (ch2[e]!='\0' ) {
                ch1[f++]=ch2[e++];
            }
        }




    int i;

    // L3ACHARAT
    if(strlen(ch1) == 1 ) {
        for(i=0;i<strlen(ch1);i++) {
            if(chiffre[(int)ch1[i]-48]=="zero")
                continue;

            printf(" %s",chiffre[(int)ch1[i]-48]);

        }
    }
    if(strlen(ch1)<3)
    {
            char w[1234];
    int j=0;
    for(i=0;i<strlen(ch1);i++) {
        w[j++]=ch1[i];
    }
    w[j]='\0';
    int nombre=atoi(w);

    printf(" %s",chiffre[nombre]);
    }

    // CENTELLE
    else
        if(strlen(ch1)==3) {
             int nombre= atoi(ch1);
            printf(" %s",chiffre[nombre]);
            }
    // MILLLLLLLLE
    else
        if(strlen(ch1)>3 && strlen(ch1)<6) {
            char cent[3],mille[3];
            int i,j=0,k=0;
            int a=strlen(ch1)%3;
            for(i=0;i<a;i++) {
                mille[j++]=ch1[i];

                             }
                  mille[j]='\0';
                    int nombre=atoi(mille);
                      printf(" %s",chiffre[nombre]);
                  printf(" mille");

              for(i=a;i<strlen(ch1);i++) {
                cent[k++]=ch1[i];
                                        }
                        cent[k]='\0';
                      int nombre2=atoi(cent);

                   printf(" %s ",chiffre[nombre2]);
                                            }
            // MILLLLLLLLEEEE EXACTE 6 NOMBRES
           else
               if(strlen(ch1)==6) {
                   if(ch1[0]=='-') {
                       printf("moin-");
                   }
                   char mille[3],cent[3];
                   int i=0,j=0,a=0;
                   for(i=0;i<strlen(ch1)-3;i++) {
                       mille[j++]=ch1[i];
                   }
                   mille[j]='\0';
                   int nombre=atoi(mille);
                   printf(" %s",chiffre[nombre]);
                   printf(" mille");
                   for(i=3;i<strlen(ch1);i++) {
                       cent[a++]=ch1[i];
                   }
                   cent[a]='\0';
                   int nombre2=atoi(cent);
                   printf(" %s",chiffre[nombre2]);
                                  }
            // MILLLLLLLIONNNNN
    else
        if(strlen(ch1)>6 && strlen(ch1)<9) {
            char cent[3],mille[3],million[3];
            int i=0,j=0,k=0,a=0;
            int b=strlen(ch1)%3;
            for(i=0;i<b;i++) {
                million[j++]=ch1[i];
            }
            million[j]='\0';
            int nombre=atoi(million);
            printf(" %s ",chiffre[nombre]);
            printf(" million ");
            for(i=b;i<strlen(ch1)-3;i++) {
                mille[k++]=ch1[i];
            }
            mille[k]='\0';
            int nombre2=atoi(mille);
            printf(" %s",chiffre[nombre2]);
            printf(" mille ");
            for(i=strlen(ch1)-3;i<strlen(ch1);i++) {
                cent[a++]=ch1[i];
            }
            cent[a]='\0';
            int nombre3=atoi(cent);
            printf(" %s",chiffre[nombre3]);
        }
        // MILLLLLLLLLLLIONNNNNN EXACTE 9 NOMBRES
         else
            if(strlen(ch1)==9) {
                char cent[3],mille[3],million[3];
                int i=0,j=0,k=0,a=0;
                for(i=0;i<strlen(ch1)-6;i++) {
                    million[j++]=ch1[i];
                }
                mille[j]='\0';
                int nombre=atoi(million);
                printf(" %s",chiffre[nombre]);
                printf(" million ");
                for(i=strlen(ch1)-6;i<strlen(ch1)-3;i++) {
                    mille[k++]=ch1[i];
                }
                mille[k]='\0';
                int nombre2=atoi(mille);
                printf(" %s",chiffre[nombre2]);
                printf(" mille ");
                for(i=strlen(ch1)-3;i<strlen(ch1);i++) {
                    cent[a++]=ch1[i];
                }
                cent[a]='\0';
                int nombre3=atoi(cent);
                printf(" %s",chiffre[nombre3]);

            }
        // MILLLLLLLLLLIARRRRDDDD
    else
        if(strlen(ch1)>9 && strlen(ch1)<12) {
            char cent[3],mille[3],million[3],milliard[3];
            int i=0,j=0,k=0,a=0,b=0;
            int c=strlen(ch1)%3;
            for(i=0;i<c;i++) {
                milliard[j++]=ch1[i];
            }
            milliard[j]='\0';
            int nombre=atoi(milliard);
            printf(" %s",chiffre[nombre]);
            printf(" milliard ");
            for(i=c;i<strlen(ch1)-6;i++) {
                million[k++]=ch1[i];
            }
            million[k]='\0';
            int nombre2=atoi(million);
            printf(" %s",chiffre[nombre2]);
            printf(" million ");
            for(i=strlen(ch1)-6;i<strlen(ch1)-3;i++) {
                mille[a++]=ch1[i];
            }
            mille[a]='\0';
            int nombre3=atoi(mille);
            printf(" %s",chiffre[nombre3]);
            printf(" mille ");
            for(i=strlen(ch1)-3;i<strlen(ch1);i++) {
                cent[b++]=ch1[i];
            }
            cent[b]='\0';
            int nombre4=atoi(cent);
            printf(" %s",chiffre[nombre4]);

            }
       // MILLLLLLLLIAAAAARRRRRD EXACTE 12 NOMBRES

    else {
        char cent[3],mille[3],million[3],milliard[3];
        int i=0,j=0,k=0,a=0,b=0;
        for(i=0;i<strlen(ch1)-9;i++) {
            milliard[j++]=ch1[i];
        }
        milliard[j]='\0';
        int nombre=atoi(milliard);
        printf(" %s",chiffre[nombre]);
        printf(" milliard ");
        for(i=strlen(ch1)-9;i<strlen(ch1)-6;i++) {
            million[k++]=ch1[i];
        }
        million[k]='\0';
        int nombre2=atoi(million);
        printf(" %s",chiffre[nombre2]);
        printf(" million ");
        for(i=strlen(ch1)-6;i<strlen(ch1)-3;i++) {
            mille[a++]=ch1[i];
        }
        mille[a]='\0';
        int nombre3=atoi(mille);
        printf(" %s",chiffre[nombre3]);
        printf(" mille ");
        for(i=strlen(ch1)-3;i<strlen(ch1);i++) {
            cent[b++]=ch1[i];
        }
        cent[b]='\0';
        int nombre4=atoi(cent);
        printf(" %s",chiffre[nombre4]);
    }

}

 // PROCEDURE POUR LES REELS
void reel_to_lettre(char ch[]) {
    int i=0,j=0;
    char ent[100000],reel[100000];
    while(ch[i]!='.') {
        ent[j++]=ch[i];
        i++;
    }
    int n=i,k=0;
    entier_to_lettre(ent);
    printf(" 'vergule'");
    //printf(" \n i = %d  n=%d  \n ",i,n);
    while(ch[n++]!='\0') {
        reel[k++]=ch[n];

    }
    entier_to_lettre(reel);
    //printf(" \n i = %d  n=%d k= %d \n ",i,n,k);


}





int main() {
        char str[111],str_moin[ 1234];
       do {
           printf(" donner un nombre n tel que la taille de n <12 : \n");
           scanf("%s",str);
       } while (strlen(str)>13);



  char *k;
    char *z;
   k=Type_Nombre(str);
    if(k == "entier") {
        if(str[0]=='-') {
            printf(" moin_");
            entier_to_lettre(str);
        }
        else
            entier_to_lettre(str);
    }
    if(k=="reel") {

        if(str[0]=='-') {
            printf(" moin_");
            reel_to_lettre(str);
        }
        else
            reel_to_lettre(str);
    }
    }








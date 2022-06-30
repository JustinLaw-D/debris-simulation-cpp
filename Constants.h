// file to hold the constants used by the program
// last updated : 2022-06-30

#include <cstddef>
#pragma once

// physics constants
const double G = 6.6743e-11;
const double Re = 6371.0;
const double Me = 5.97219e+24;

// atmospheric data
const size_t num_alts = 41;
const double logz[41] = {5.0,5.079181246047625,5.146128035678238,5.204119982655925,5.2552725051033065,5.301029995663981,5.342422680822207,5.380211241711606,5.414973347970818,5.447158031342219,5.477121254719663,5.505149978319906,5.531478917042255,5.556302500767288,5.57978359661681,5.6020599913279625,5.623249290397901,5.643452676486188,5.662757831681574,5.681241237375588,5.698970004336019,5.7160033436347994,5.732393759822968,5.748188027006201,5.763427993562937,5.778151250383644,5.792391689498254,5.8061799739838875,5.819543935541868,5.832508912706237,5.845098040014257,5.857332496431269,5.869231719730976,5.880813592280791,5.892094602690481,5.903089986991944,5.913813852383717,5.924279286061882,5.9344984512435675,5.944482672150169,5.954242509439325};
const double logdenL[41] = {-6.274905478918531,-7.661543506395395,-8.505845405981557,-9.03763066432998,-9.462180904926726,-9.832682665251824,-10.157390760389438,-10.450996737974211,-10.72584215073632,-10.987162775294827,-11.232102383981909,-11.468521082957745,-11.694648630553376,-11.913640169325252,-12.127261172527332,-12.334419008982048,-12.534617148551582,-12.7281583934635,-12.91721462968355,-13.094743951251548,-13.26440110030182,-13.423658649794207,-13.57186520597121,-13.707743928643524,-13.832682665251824,-13.943095148663527,-14.040958607678906,-14.130181792020672,-14.210419287835574,-14.282329496997738,-14.346787486224656,-14.405607449624574,-14.45842075605342,-14.508638306165727,-14.554395796726402,-14.596879478824182,-14.638272163982407,-14.675717544702307,-14.712198270069774,-14.749579997691106,-14.782516055786093};
const double logdenM[41] = {-6.262012673666569,-7.619788758288394,-8.400116927926312,-8.866461091629782,-9.211124884224583,-9.498940737782249,-9.752026733638193,-9.978810700930062,-10.1890957193313,-10.385102783966866,-10.570247719997592,-10.744727494896694,-10.910094888560602,-11.071604147743287,-11.22548303427145,-11.374687549038326,-11.51999305704285,-11.661543506395395,-11.79860287567955,-11.931814138253838,-12.065501548756432,-12.1944991418416,-12.321481620959887,-12.446116973356126,-12.567030709125595,-12.686132779630846,-12.804100347590767,-12.920818753952375,-13.032452023781138,-13.143271109617118,-13.2518119729938,-13.356547323513812,-13.45842075605342,-13.554395796726402,-13.645891560852599,-13.732828271596986,-13.8153085691824,-13.892790030352131,-13.96657624451305,-14.032920265855504,-14.096367483915763};
const double logdenHL[41] = {-6.2644011003018205,-7.610833915635467,-8.364516253185087,-8.812479279163536,-9.130768280269024,-9.387216143280265,-9.60906489289662,-9.806875401645538,-9.98296666070122,-10.147520006363143,-10.301029995663981,-10.44490555142168,-10.58335949266172,-10.714442690992227,-10.84163750790475,-10.962573502059376,-11.079876673709276,-11.193820026016112,-11.304518323509802,-11.41228903498109,-11.517126416391246,-11.619788758288394,-11.718966632752272,-11.818156412055227,-11.913640169325252,-12.00788851221305,-12.100726812682396,-12.191789027075778,-12.282329496997738,-12.371611069949688,-12.459670525209127,-12.546681659952963,-12.630784142589857,-12.71669877129645,-12.79860287567955,-12.87942606879415,-12.958607314841775,-13.03574036980315,-13.112382699664265,-13.187086643357144,-13.260427655549908};
const size_t num_months = 144;
const double f107_mo[144] = {74.0,74.0,73.0,74.0,75.0,72.0,71.0,79.0,96.0,85.0,100.0,99.0,93.0,93.0,109.0,108.0,107.0,108.0,114.0,136.0,138.0,117.0,140.0,150.0,141.0,142.0,126.0,117.0,149.0,170.0,166.0,171.0,136.0,165.0,192.0,170.0,158.0,173.0,208.0,184.0,185.0,180.0,202.0,163.0,182.0,168.0,179.0,174.0,167.0,147.0,178.0,178.0,148.0,174.0,131.0,163.0,234.0,208.0,213.0,236.0,227.0,205.0,179.0,190.0,178.0,149.0,174.0,184.0,176.0,167.0,169.0,157.0,144.0,125.0,132.0,126.0,116.0,129.0,128.0,122.0,112.0,151.0,141.0,115.0,114.0,107.0,112.0,101.0,100.0,97.0,119.0,110.0,103.0,106.0,114.0,95.0,102.0,97.0,90.0,86.0,100.0,94.0,96.0,91.0,91.0,77.0,86.0,91.0,83.0,77.0,75.0,89.0,81.0,77.0,76.0,79.0,78.0,74.0,86.0,84.0,83.0,78.0,72.0,72.0,74.0,74.0,72.0,69.0,67.0,68.0,70.0,79.0,74.0,71.0,73.0,70.0,68.0,66.0,66.0,66.0,67.0,68.0,69.0,69.0};

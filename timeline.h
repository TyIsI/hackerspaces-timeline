struct hsdata {
    char *name;
    char *country;
    char *city;
    double lat;
    double lon;
    int date;
    char *url;
};

struct hsdata timeline[] = {
  { "PRG", "Denmark", "Lyngby", 55.786482, 12.526021, -631155600, "http://www.prg.dtu.dk/" },
  { "MITERS", "United States of America", "Boston", 42.362080, -71.097078, -315622800, "http://miters.mit.edu" },
  { "Computer Club of Western Michigan University", "United States of America", "Kalamazoo", 42.281020, -85.617539, 212972400, "http://yakko.cs.wmich.edu" },
  { "Computer Club an der RWTH Aachen e.V.", "Germany", "Aachen", 50.777158, 6.080541, 378687600, "http://www.ccac.rwth-aachen.de/" },
  { "The Clay Store", "New Zealand", "North Shore", -36.821213, 174.796464, 410223600, "" },
  { "Mirtillo", "Italy", "Bolzano", 46.496715, 11.358005, 504918000, "" },
  { "The Geek Group", "United States of America", "Kalamazoo", 42.313879, -85.584339, 773532000, "http://www.thegeekgroup.org" },
  { "LJUDMILA", "Slovenia", "Ljubljana", 46.047215, 14.500834, 783644400, "http://www.ljudmila.org/" },
  { "Freaknet", "Italy", "Catania", 37.503365, 15.088455, 785631600, "http://freaknet.org" },
  { "C-base", "Germany", "Berlin", 52.513000, 13.420000, 808869600, "https://c-base.org/" },
  { "Spc", "United Kingdom", "Greenwich", 51.477748, -0.010386, 834357600, "http://spc.org/" },
  { "Feral Technology Institute", "United States of America", "Guernsey", 41.715424, -92.299042, 849308400, "http://feral-tech.com/" },
  { "PING", "Norway", "Oslo", 59.945039, 10.717678, 873842400, "http://www.ping.uio.no" },
  { "C4", "Germany", "Cologne", 50.951900, 6.903200, 901663200, "https://koeln.ccc.de/" },
  { "Spline", "Germany", "Berlin", 52.455949, 13.297178, 909356400, "http://spline.de" },
  { "GoodBandit", "Indonesia", "Bandung", -7.455433, 107.487304, 928360800, "" },
  { "K4CG", "Germany", "Nuremberg", 49.448674, 11.082147, 939074400, "http://www.k4cg.org/" },
  { "Labomedia", "France", "Orleans", 47.900572, 1.913478, 946940400, "http://labomedia.net" },
  { "Bootlab", "Germany", "Berlin", 52.543520, 13.372510, 948582000, "http://bootlab.org" },
  { "GUTSU", "Italy", "Messina", 38.192332, 15.555523, 965080800, "http://www.giovanniraco.com" },
  { "Poetry hacklab", "Italy", "Palazzolo Acreide", 37.066858, 14.906822, 978303600, "http://poetry.freaknet.org" },
  { "CC Itzehoe", "Germany", "Itzehoe", 53.923900, 9.529300, 984610800, "http://www.cciz.de" },
  { "Chaosdorf", "Germany", "Duesseldorf", 51.213869, 6.784465, 988063200, "https://www.chaosdorf.de/" },
  { "LUGoNS", "Serbia", "Novi Sad", 45.249104, 19.833095, 989532000, "http://www.ns-linux.org" },
  { "Entropia", "Germany", "Karlsruhe", 49.006700, 8.407438, 990050400, "http://entropia.de/" },
  { "Riereta", "Catalonia", "Barcelona", 41.378850, 2.167418, 991260000, "http://riereta.net/" },
  { "F-HackLab", "Italy", "Roma", 41.813191, 12.476436, 999295200, "http://fhl.noblogs.org/" },
  { "Sugar Shack", "United States of America", "Los Angeles", 0.000000, 0.000000, 1001023200, "http://www.twitter.com/sugarshack" },
  { "Kiberpipa", "Slovenia", "Ljubljana", 46.055850, 14.503863, 1001887200, "http://www.kiberpipa.org/" },
  { "HZV", "France", "Saint Ouen", 48.904097, 2.331152, 1018389600, "https://www.hackerzvoice.net" },
  { "Bucketworks", "United States of America", "Milwaukee", 43.023945, -87.916442, 1021845600, "http://bucketworks.org" },
  { "Verdebinario", "Italy", "Cosenza", 39.308978, 16.240338, 1040252400, "http://www.verdebinario.org" },
  { "Hasty Pastry", "United States of America", "Cambridge", 0.000000, 0.000000, 1044831600, "http://www.hastypastry.net" },
  { "Hackers Lounge", "Germany", "Berlin", 52.516796, 13.465242, 1068764400, "http://sama32.squat.net/" },
  { "Chaos@paderborn", "Germany", "Paderborn", 51.713557, 8.734896, 1084917600, "http://www.chaos-paderborn.de/" },
  { "Unperfekthaus", "Germany", "Essen", 51.458774, 7.007159, 1086040800, "http://www.unperfekthaus.de/" },
  { "HackArena", "Spain", "Sevilla", 37.382730, -5.983494, 1099263600, "http://sevilla.hacklabs.org" },
  { "Das Labor", "Germany", "Bochum", 51.480846, 7.208606, 1106607600, "https://www.das-labor.org/" },
  { "Null Hacklab", "Spain", "Cerdanyola del Valles", 41.492978, 2.150552, 1110841200, "http://null-lab.hacklabs.org" },
  { "Hacklab Cosenza", "Italy", "Cosenza", 39.353738, 16.224853, 1125525600, "http://hacklab.cosenzainrete.it" },
  { "C3D2 HQ", "Germany", "Dresden", 51.040000, 13.750000, 1128117600, "https://www.c3d2.de/" },
  { "HackersNepal", "Nepal", "Kathmandu", 28.394857, 84.124008, 1132009200, "" },
  { "Metalab", "Austria", "Vienna", 48.209410, 16.356175, 1143842400, "http://metalab.at" },
  { "OfficeShareFukuoka", "Japan", "Fukuoka", 33.580195, 130.398494, 1143842400, "http://www.office-share.jp/" },
  { "FuRty", "Turkey", "Istanbul", 0.000000, 0.000000, 1146261600, "http://legend-h.org/" },
  { "Crealab", "France", "Nantes", 46.975254, -1.627442, 1149112800, "http://www.crealab.info" },
  { "Computerlabor@KuZeB", "Switzerland", "Bremgarten", 47.350770, 8.344504, 1156802400, "http://computerlabor.kire.ch" },
  { "TechShop Menlo Park", "United States of America", "Menlo Park", 37.483185, -122.178054, 1159567200, "http://www.techshop.ws" },
  { "HappyLab", "Austria", "Vienna", 48.228020, 16.400183, 1160172000, "http://www.happylab.at/" },
  { "Experimedia", "Peru", "Lima", -12.114947, -77.030962, 1163545200, "http://experimedia.com.pe" },
  { "Fraternal Order of Buffalo", "United States of America", "Buffalo", 42.886447, -78.878369, 1167606000, "http://www.orderofbuffalo.com/" },
  { "DOCK18", "Switzerland", "Zürich", 47.342810, 8.536112, 1167606000, "http://www.dock18.ch/" },
  { "RAIF HQ", "Switzerland", "Muttenz", 47.532291, 7.634248, 1167606000, "https://www.chaostreff.ch/" },
  { "Http://trebelab.arkipelagos.net", "Spain", "Vigo", 0.000000, 0.000000, 1167692400, "http://trebelab.arkipelagos.net" },
  { "ChaosKueste", "Germany", "Kiel", 54.323036, 10.123089, 1169506800, "http://chaoskueste.de" },
  { "The WatershedPDX", "United States of America", "Portland, OR", 45.486036, -122.649766, 1172703600, "http://watershedpdx.com/" },
  { "Realraum", "Austria", "Graz", 47.065780, 15.442310, 1172703600, "http://realraum.at/" },
  { "Noisebridge", "United States of America", "San Francisco", 37.762376, -122.419217, 1172876400, "https://www.noisebridge.net/" },
  { "23b Shop", "United States of America", "Fullerton", 33.870273, -117.924671, 1177970400, "http://shop.23b.org/" },
  { "Slug", "Netherlands", "Amsterdam", 52.355290, 4.902486, 1178748000, "http://squat.net/slug" },
  { "Frieda23", "Germany", "Rostock", 54.091214, 12.122930, 1185919200, "http://www.opennet-initiative.de/" },
  { "Vers", "Netherlands", "Rotterdam", 51.935017, 4.480783, 1185919200, "http://www.verswerk.org" },
  { "SuperHappyDevClub", "United Kingdom", "Cambridge", 52.213444, 0.151749, 1186783200, "http://superhappydevclub.org" },
  { "Zero1 Nation", "United States of America", "Colorado Springs", 38.803322, -104.811062, 1187301600, "http://pdjfyv7v3pn34w4f.onion/" },
  { "NYC Resistor", "United States of America", "Brooklyn", 40.683793, -73.981738, 1187388000, "http://nycresistor.com" },
  { "/tmp/lab", "France", "Vitry-sur-Seine", 48.776202, 2.409852, 1191189600, "http://www.tmplab.org/" },
  { "Hacker Consortium", "United States of America", "Nashville", 0.000000, 0.000000, 1191189600, "http://www.hackerconsortium.com" },
  { "Moddr", "Netherlands", "Rotterdam", 51.907175, 4.453567, 1193349600, "http://moddr.net" },
  { "BFZ Berlin e.V.", "Germany", "Berlin", 52.411330, 13.394410, 1199142000, "http://www.bfz-berlin.org" },
  { "GrendelVan", "United States of America", "Colorado Springs", 38.943700, -104.807900, 1199142000, "http://mhs.hackerdemia.com" },
  { "4nchor5 la6", "Japan", "Tokyo", 35.635026, 139.720789, 1203807600, "http://456.im" },
  { "Cowtown Computer Congress", "United States of America", "Kansas City", 39.071556, -94.599961, 1205535600, "http://cowtowncomputercongress.org" },
  { "Makers Local 256", "United States of America", "Huntsville", 34.727039, -86.596990, 1205967600, "https://256.makerslocal.org" },
  { "LUGR", "Germany", "Regensburg", 49.022178, 12.085876, 1205967600, "http://www.lugr.de" },
  { "AS220 Labs", "United States of America", "Providence", 41.821797, -71.416014, 1207000800, "http://as220.org/labs" },
  { "AS220 labs", "United States of America", "Providence", 41.821797, -71.416014, 1207000800, "http://as220.org/labs" },
  { "New York Hacking Society", "United States of America", "New York City", 40.759871, -73.991032, 1209592800, "" },
  { "Http://mad.dse.nl", "Netherlands", "Eindhoven", 51.444572, 5.462159, 1209592800, "http://mad.dse.nl" },
  { "MuCCC", "Germany", "Munich", 48.108121, 11.603879, 1212271200, "http://muc.ccc.de/" },
  { "Sublab", "Germany", "Leipzig", 51.330407, 12.330855, 1213826400, "http://www.sublab.org/" },
  { "HackLab.TO", "Canada", "Toronto", 43.654847, -79.400527, 1214863200, "http://hacklab.to" },
  { "FOULAB", "Canada", "Montreal", 45.479980, -73.589820, 1216332000, "http://foulab.org/" },
  { "IslandLabs", "United States of America", "Stony Brook", 40.913762, -73.126513, 1216764000, "http://islandlabs.org" },
  { "Cyber Indian Warrior", "India", "Chennai", 13.011082, 80.236314, 1217109600, "" },
  { "Cyber Indian Army", "India", "Chennai", 13.011082, 80.236314, 1217109600, "" },
  { "VHS", "Canada", "Vancouver", 49.281711, -123.105617, 1219096800, "http://vancouver.hackspace.ca" },
  { "Forskningsavdelningen", "Sweden", "Malmö", 55.598466, 13.030814, 1219615200, "http://forskningsavd.se" },
  { "Syn2cat", "Luxembourg", "Strassen", 49.616200, 6.071000, 1219701600, "https://www.hackerspace.lu" },
  { "Black Lodge", "United States of America", "Redmond", 47.663392, -122.104153, 1220220000, "http://www.blacklodgeresearch.org" },
  { "Denhac", "United States of America", "Denver", 39.803067, -104.974937, 1220392800, "http://www.denhac.org" },
  { "HacClearwater", "United States of America", "Clearwater", 27.953062, -82.773519, 1220565600, "http://hacclearwater.wikia.org" },
  { "Club Workshop", "United States of America", "Denver", 39.732496, -105.013211, 1220565600, "http://www.clubworkshop.com" },
  { "LCD - Audiência Zero", "Portugal", "Porto", 41.190795, -8.611243, 1221861600, "http://www.audienciazero.org/lcd/" },
  { "Pumping Station: One", "United States of America", "Chicago", 41.942273, -87.703013, 1222380000, "http://www.pumpingstationone.org" },
  { "Carrboro Creative Coworking", "United States of America", "Carrboro", 35.911604, -79.069169, 1223244000, "http://www.carrborocoworking.com" },
  { "Hackerspace Brussels", "Belgium", "Brussels", 50.873015, 4.377143, 1223935200, "http://hackerspace.be" },
  { "Phoenix Asylum", "United States of America", "Boulder", 40.026070, -105.243058, 1225494000, "http://phoenixasylum.org" },
  { "Raumfahrtagentur", "Germany", "Berlin", 52.530603, 13.418733, 1226617200, "http://raumfahrtagentur.org/" },
  { "QueLab", "United States of America", "Albuquerque", 35.080371, -106.627085, 1228086000, "http://quelab.net/wiki/" },
  { "FreesideAtlanta", "United States of America", "Atlanta", 33.736830, -84.408126, 1228172400, "http://www.FreesideAtlanta.org" },
  { "The Skiff", "United Kingdom", "Brighton", 50.827074, -0.136553, 1228431600, "http://theskiff.org" },
  { "Southern Arizona Technology Lab", "United States of America", "Tucson", 32.227832, -110.943784, 1230159600, "http://www.satl.info" },
  { "TechStars", "United States of America", "Boulder", 40.017424, -105.277025, 1230246000, "http://www.winterinthebunker.com/" },
  { "TX/RX Labs (Houston Hackerspace)", "United States of America", "Houston", 29.758192, -95.350509, 1230764400, "http://txrxlabs.org/" },
  { "Randomdata", "Netherlands", "Utrecht", 52.091766, 5.130436, 1230764400, "http://www.randomdata.nl" },
  { "Twin Cities Maker", "United States of America", "Minneapolis", 44.955535, -93.226731, 1231196400, "http://www.tcmaker.org" },
  { "Initlab", "Bulgaria", "Sofia", 42.681741, 23.321807, 1231887600, "http://initlab.org" },
  { "TOG", "Ireland", "Dublin", 53.341521, -6.268784, 1232492400, "http://tog.ie/" },
  { "(Baltimore) Harford Hackerspace", "United States of America", "Baltimore County", 39.346468, -76.535775, 1233442800, "http://www.harfordhackerspace.org" },
  { "Unloquer", "Colombia", "Medellin", 6.247434, -75.580447, 1233442800, "http://unloquer.org/" },
  { "Hackerspace Budapest", "Hungary", "Budapest", 47.500647, 19.065131, 1233442800, "http://hspbp.org" },
  { "London Hackspace", "United Kingdom", "London", 51.530453, -0.076389, 1233529200, "http://london.hackspace.org.uk" },
  { "Free Information Exchange Foundation", "United States of America", "Tulsa", 36.092480, -95.903393, 1234825200, "http://www.fiefoundation.net" },
  { "Hacklaviva", "Portugal", "Porto", 41.161401, -8.604838, 1235084400, "http://hacklaviva.net" },
  { "Columbus Idea Foundry", "United States of America", "Columbus", 39.987480, -82.952096, 1235170800, "http://www.ColumbusIdeaFoundry.com" },
  { "Connected Community", "Australia", "Melbourne", -37.814620, 144.963810, 1235862000, "http://groups.google.com/group/connected-community-hackerspace" },
  { "HackPittsburgh", "United States of America", "Pittsburgh", 40.438270, -79.978133, 1236985200, "http://www.hackpittsburgh.org" },
  { "United Greenworks", "Canada", "Grande Prairie", 55.193110, -118.848517, 1237244400, "http://www.unitedgreenworks.com" },
  { "Hacker Space Kuala Lumpur", "Malaysia", "Kuala Lumpur", 3.136220, 101.621046, 1237244400, "http://hackerspace.my" },
  { "Labor23", "Germany", "Wuerzburg", 49.761462, 9.959779, 1237762800, "http://www.labor23.org/" },
  { "TechShop RDU", "United States of America", "Raleigh", 35.896169, -78.744915, 1237762800, "http://techshoprdu.com/" },
  { "Hack.rva", "United States of America", "Richmond", 37.574303, -77.475483, 1238022000, "http://hackrva.org" },
  { "MakerSpace", "New Zealand", "Wellington", -41.292238, 174.776523, 1238108400, "http://makerspace.org.nz" },
  { "Diyode Guelph", "Canada", "Guelph", 43.542024, -80.242046, 1238364000, "http://www.diyode.com" },
  { "Hackerspace Brisbane", "Australia", "Brisbane", -27.451567, 153.038582, 1238364000, "http://hsbne.org" },
  { "Artifactory", "Australia", "Perth", -31.901853, 115.810307, 1238364000, "http://www.artifactory.org.au" },
  { "Skillhouse", "United States of America", "Gainesville", 29.654686, -82.326290, 1238450400, "http://www.skillhouse.org" },
  { "I3 Detroit", "United States of America", "Ferndale", 42.453612, -83.113510, 1238536800, "http://www.i3detroit.com" },
  { "MechArtLab", "Switzerland", "Zürich", 47.377811, 8.525683, 1238536800, "http://www.mechatronicart.ch" },
  { "Zeitsparwerk", "Austria", "Wörgl", 47.490273, 12.063026, 1238536800, "http://www.zeitsparwerk.org/" },
  { "Helsinki Hacklab", "Finland", "Helsinki", 60.194742, 24.951697, 1238709600, "http://www.hacklab.fi" },
  { "Access Space", "United Kingdom", "Sheffield", 53.376081, -1.467449, 1238796000, "http://access-space.org" },
  { "HeatSync Labs", "United States of America", "Chandler", 33.299600, -111.841911, 1238882400, "http://www.heatsynclabs.org" },
  { "Artengine Mod Lab", "Canada", "Ottawa", 45.425491, -75.689353, 1239055200, "" },
  { "Hive13", "United States of America", "Cincinnati", 39.135452, -84.538621, 1239228000, "http://www.hive13.org" },
  { "Antitronics", "United States of America", "Huntsville", 34.716634, -86.598145, 1239573600, "http://www.antitronics.com" },
  { "The Makers Alliance", "United States of America", "Cleveland", 41.468651, -81.652650, 1240005600, "http://www.makersalliance.org/" },
  { "Gothenburg Hackerspace", "Sweden", "Gothenburg", 57.741800, 11.952700, 1240437600, "http://gbg.hackerspace.se/" },
  { "Bytewerk", "Germany", "Ingolstadt", 48.770729, 11.381235, 1240869600, "http://bytewerk.org/" },
  { "SysOp", "Sweden", "Gothenburg", 57.720928, 12.007971, 1241042400, "" },
  { "Buffalo", "United States of America", "Buffalo", 42.875671, -78.851792, 1241042400, "http://www.buffalolab.org/" },
  { "Tetalab", "France", "Toulouse", 43.618711, 1.420305, 1241128800, "http://tetalab.org" },
  { "BrainSilo", "United States of America", "Portland, OR", 45.537798, -122.671950, 1241215200, "http://brainsilo.org/" },
  { "Buffalolabs", "United States of America", "Buffalo", 42.875639, -78.851781, 1241560800, "http://www.buffalolab.org/blog/" },
  { "ENTS", "Canada", "Edmonton", 53.549800, -113.517570, 1241906400, "http://ents.ca" },
  { "Tokyo Hacker Space", "Japan", "Tokyo", 35.640836, 139.720602, 1242424800, "http://www.tokyohackerspace.com" },
  { "Hive 76", "United States of America", "Philadelphia", 39.962454, -75.152666, 1242597600, "http://hive76.org" },
  { "Micro", "Germany", "Munich", 48.112575, 11.513479, 1243029600, "http://santa.fnord.cx/" },
  { "Labitat", "Denmark", "Copenhagen", 55.676283, 12.545726, 1243634400, "https://labitat.dk/" },
  { "Arch Reactor", "United States of America", "Saint Louis", 38.606700, -90.222289, 1243807200, "http://archreactor.org" },
  { "HackerDojo", "United States of America", "Mountain View", 37.386622, -122.064266, 1243807200, "http://wiki.hackerdojo.com" },
  { "ThinkHaus", "Canada", "Hamilton", 43.263370, -79.887500, 1243893600, "http://www.thinkhaus.org" },
  { "Jigsaw Renaissance", "United States of America", "Seattle", 47.609013, -122.325962, 1244239200, "http://www.jigsawrenaissance.org" },
  { "Test Kitchen", "United States of America", "Manhattan", 40.724933, -73.996577, 1244930400, "http://buglabs.net/testkitchen" },
  { "FAMiLab", "United States of America", "Orlando", 28.670002, -81.420247, 1245103200, "http://familab.org/" },
  { "Hackerspacesp", "Brazil", "São Paulo", -23.533043, -46.651543, 1245708000, "http://garoa.net.br" },
  { "HACMan", "United Kingdom", "Manchester", 53.484363, -2.236382, 1245794400, "http://hacman.org.uk" },
  { "Hackerspace Johor Bahru", "Malaysia", "Johor Bahru", 1.470712, 103.768032, 1246053600, "http://groups.google.com/group/hackerspace-johor-bahru" },
  { "Robots and Dinosaurs", "Australia", "Sydney", -33.959327, 151.138133, 1246226400, "http://robodino.org/" },
  { "Monoceros Media", "United States of America", "San Jose", 37.292715, -121.846259, 1246399200, "" },
  { "Brighton Hacker Space", "United Kingdom", "Brighton and Hove", 50.819716, -0.136572, 1246744800, "http://www.buildbrighton.com" },
  { "KwartzLab", "Canada", "Kitchener", 43.455060, -80.496382, 1247090400, "http://www.kwartzlab.ca" },
  { "FUBAR Labs", "United States of America", "Highland Park (right across the river from New Brunswick)", 40.505483, -74.432455, 1247263200, "http://fubarlabs.com" },
  { "Baltimore Node", "United States of America", "Baltimore", 39.311275, -76.618791, 1247695200, "http://www.baltimorenode.org/" },
  { "Nooumenon", "Germany", "Osnabrück", 52.277900, 8.039300, 1248300000, "" },
  { "Delaware Hackerspace", "United States of America,United States of America", "Wilmington,Wilmington", 39.743206, -75.550642, 1248904800, "http://www.vintagecomputer.net" },
  { "Alpha One Labs", "United States of America", "Brooklyn", 40.718008, -73.945579, 1249077600, "http://www.alphaonelabs.com" },
  { "Gumbo Labs", "United States of America", "New Orleans", 29.976834, -90.110385, 1249077600, "http://www.gumbolabs.org/" },
  { "Digital Non-Sense", "France", "Paris", 48.889432, 2.304875, 1249077600, "http://www.digitalnonsense.org/" },
  { "Jaaga: Bangalore Art & Technology Space", "India", "Bangalore", 12.961176, 77.601741, 1249768800, "http://jaaga.wikidot.com" },
  { "Hackerspace f2m", "Germany", "Frankfurt", 50.111512, 8.680506, 1250114400, "http://hackerspace-ffm.de" },
  { "Münster", "Germany", "Münster", 51.943374, 7.638241, 1250287200, "http://www.warpzone.ms/" },
  { "Revelation space", "Netherlands", "Den Haag", 52.069856, 4.336933, 1250460000, "http://revspace.nl/" },
  { "Columbia Gadget Works", "United States of America", "Columbia", 38.951559, -92.327567, 1250546400, "http://www.columbiagadgetworks.org" },
  { "XDA", "Portugal", "Coimbra", 40.211491, -8.429201, 1251756000, "http://xdatelier.org" },
  { "Ignition Alley", "United States of America", "Atlanta", 33.773319, -84.362521, 1251756000, "http://www.ignitionalley.com" },
  { "Milwaukee Makerspace", "United States of America", "Milwaukee", 42.988563, -87.911668, 1251756000, "http://milwaukeemakerspace.org" },
  { "Hacklab ZAM", "Mexico", "Mexico City", 0.000000, 0.000000, 1252015200, "http://espora.org/zam" },
  { "Flipdot", "Germany", "Kassel", 51.320450, 9.495230, 1252101600, "http://flipdot.org/blog" },
  { "Kiosk of Piracy", "Germany", "Weimar", 50.979233, 11.324020, 1252274400, "http://www.kioskofpiracy.org/" },
  { "KIKA", "Macedonia", "Skopje", 41.988085, 21.431515, 1252447200, "http://hacklab.sk/" },
  { "Godhack.org", "Indonesia,Indonesia", "Borneo,Borneo", 1.640630, 116.419389, 1252447200, "http://www.godhack.org/" },
  { "All Hands Active!", "United States of America", "Ann Arbor", 42.279376, -83.741851, 1252533600, "http://www.allhandsactive.com/" },
  { "Shackspace", "Germany", "Stuttgart", 48.803100, 9.186400, 1252792800, "http://shackspace.de/" },
  { "Hack Fusion", "United States of America", "Lexington", 38.042088, -84.492216, 1253138400, "http://hackfusion.org" },
  { "KLUG.gr (Kozani Linux User's Group", "Greece", "Kozani", 40.301030, 21.785963, 1254348000, "http://klug.gr" },
  { "Gangplank", "US", "Chandler", 33.299606, -111.841905, 1254348000, "http://gangplankhq.com" },
  { "HackLabValls", "Spain", "Valls", 41.287276, 1.251579, 1254348000, "http://hacklabvalls.org/" },
  { "MadLab", "United Kingdom", "Manchester", 53.484343, -2.236383, 1254348000, "http://madlab.org.uk/" },
  { "MatesLab", "Argentina", "Mar del Plata", -37.979858, -57.589794, 1254693600, "http://www.mateslab.com.ar" },
  { "Whitespace", "Belgium", "Ghent", 51.059767, 3.732610, 1254780000, "http://0x20.be" },
  { "WIT NetworkingLAB AITP", "United States of America", "Boston", 42.336784, -71.095341, 1255125600, "http://witaitp.org" },
  { "RaumZeitLabor", "Germany", "Mannheim", 49.507918, 8.499529, 1255125600, "http://raumzeitlabor.de/" },
  { "Interlock Rochester", "United States of America", "Rochester", 43.161398, -77.582837, 1255212000, "http://www.interlockroc.org" },
  { "Crash Space", "United States of America", "Los Angeles", 34.019446, -118.405430, 1255298400, "http://crashspace.org/" },
  { "Hs-bcn", "Catalonia", "Barcelona", 41.375772, 2.167001, 1255384800, "https://red.artelibredigital.net/pg/groups/9080/hackerspace-barcelona/" },
  { "FED e.V.", "Germany", "Aachen", 50.779174, 6.087021, 1255557600, "https://www.fedev.eu/" },
  { "Metrix Create:Space", "United States of America", "Seattle", 47.624796, -122.320981, 1255557600, "http://metrixcreatespace.com/" },
  { "WhitehatGuru.net", "India", "New Delhi", 28.635308, 77.224960, 1255730400, "http://www.whitehatguru.net" },
  { "Hickerspace", "Germany", "Hildesheim", 52.161513, 9.957011, 1255989600, "http://hickerspace.org" },
  { "LVL1", "United States of America", "Louisville", 38.244730, -85.738740, 1257807600, "http://www.lvl1.org/" },
  { "Bristol Hackspace", "United Kingdom", "Bristol", 51.462831, -2.589651, 1257807600, "http://bristol.hackspace.org.uk/" },
  { "Hack42", "Netherlands", "Arnhem", 51.975358, 5.919270, 1258671600, "http://hack42.nl" },
  { "Canberra", "Australia", "Canberra", -35.244498, 149.145048, 1259276400, "http://www.makehackvoid.com/" },
  { "Grill-bit", "Sweden", "Umeå", 63.823290, 20.281990, 1259449200, "http://grillbit.se" },
  { "TEK-Boblerne", "Denmark", "Odense", 55.373130, 10.396430, 1259622000, "http://www.tekboblerne.dk" },
  { "The Bocoup Loft", "United States of America", "Boston", 42.349164, -71.049346, 1259622000, "http://loft.bocoup.com" },
  { "World Hackers United", "United States of America", "Queens", 40.683420, -73.795296, 1261177200, "http://www.worldhackersunited.org" },
  { "757 Labs", "United States of America", "Norfolk", 36.852952, -76.291494, 1261695600, "http://www.757labs.com" },
  { "BioCurious", "United States of America", "Mountain View", 37.387453, -122.063609, 1262300400, "http://www.biocurious.org" },
  { "Proxy Hack Lab", "United States of America", "Winston Salem", 36.099106, -80.251705, 1262300400, "http://repraplogphase.blogspot.com/" },
  { "TheTransistor", "United States of America", "Provo", 40.227428, -111.656893, 1262300400, "http://thetransistor.com" },
  { "IHub", "Kenya", "Nairobi", -1.298686, 36.793598, 1262300400, "http://iHub.co.ke" },
  { "ATX Hackerspace", "United States of America", "Austin", 30.335674, -97.681975, 1262300400, "http://atxhackerspace.org/index.php/Main_Page" },
  { "Hack Århus", "Denmark", "Århus", 56.185799, 10.211087, 1262300400, "http://hackaarhus.dk" },
  { "Buildmore Workshop", "United States of America", "Dublin", 40.093971, -83.150543, 1262300400, "http://www.buildmoreworkshop.com" },
  { "BuildMore Workshop", "United States of America", "Dublin", 40.093971, -83.150543, 1262300400, "http://www.BuildMoreWorkshop.com" },
  { "Midsouth Makers", "United States of America", "Midsouth Makers", 35.092344, -89.989931, 1262905200, "http://www.midsouthmakers.org" },
  { "88 Spaces", "China", "Shanghai", 0.000000, 0.000000, 1262905200, "http://88spaces.com" },
  { "Auckland Hackerspace", "New Zealand", "Auckland", -36.850192, 174.752232, 1263855600, "" },
  { "Underscore To", "Italy", "Torino", 45.071185, 7.649326, 1263942000, "http://www.autistici.org/underscore" },
  { "Moenenspace", "Netherlands", "Nijmegen", 51.841314, 5.869528, 1264201200, "http://www.moenenspace.nl" },
  { "NextFab Studio", "United States of America", "Philadelphia", 39.956641, -75.196958, 1264201200, "http://nextfabstudio.com/" },
  { "FredHack", "United States of America", "Fredericksburg", 38.451570, -77.646152, 1264287600, "http://evadot.com/" },
  { "BUILDS", "United States of America", "Boston", 42.348988, -71.104243, 1264460400, "http://builds.bu.edu" },
  { "Dallas Makerspace", "United States of America", "Dallas", 32.898557, -96.716305, 1264546800, "http://www.dallasmakerspace.com" },
  { "San Diego Hacker News Meetup", "United States of America", "San Diego", 32.853629, -117.214697, 1264719600, "" },
  { "HackerSpace Adelaide", "Australia", "Adelaide", -34.923811, 138.598023, 1264806000, "http://www.hackerspace-adelaide.org.au/" },
  { "The Archive Hacker Pad", "United States of America", "Los angeles", 34.121009, -118.188267, 1264978800, "" },
  { "QC Co-Lab", "United States of America", "Davenport", 41.574609, -90.561728, 1265842800, "https://www.qccolab.com" },
  { "Nottinghack", "United Kingdom", "Nottingham", 52.947897, -1.142746, 1266102000, "http://www.nottinghack.org.uk" },
  { "CT Hackerspace", "United States of America", "Waterbury", 41.558152, -73.051496, 1266102000, "http://www.cthackerspace.com" },
  { "Solid State Depot", "United States of America", "Boulder", 40.022179, -105.217197, 1266620400, "http://www.solidstatedepot.com/" },
  { "091 Labs", "Ireland", "Galway", 53.273797, -9.051780, 1267052400, "http://www.091labs.com" },
  { "Karaj", "Lebanon", "Beirut", 33.901514, 35.523686, 1267398000, "http://www.karajbeirut.org" },
  { "757Labs", "United States of America", "Norfolk", 36.852898, -76.291728, 1267398000, "http://757labs.org" },
  { "IExploit", "United Kingdom", "Southampton", 0.000000, 0.000000, 1267398000, "http://www.iexploit.org" },
  { "Hackerspace Antwerp", "Belgium", "Deurne (Antwerp)", 51.209021, 4.453325, 1267398000, "http://we.voidwarranties.be" },
  { "Hack Rolla!", "United States of America", "Rolla", 37.942813, -91.763621, 1267398000, "http://www.hackrolla.org" },
  { "MakeIt Labs", "United States of America", "Lowell", 42.629672, -71.315106, 1267398000, "http://makeitlabs.com" },
  { "Sector67", "United States of America", "Madison", 43.094103, -89.354242, 1268175600, "http://sector67.org" },
  { "The Soldered Resistor", "United States of America", "Pawtucket", 0.000000, 0.000000, 1268780400, "" },
  { "Northackton", "United Kingdom", "Northampton", 52.236874, -0.897391, 1269126000, "http://northackton.stdin.co.uk/blog" },
  { "Vancouver Community Lab", "Canada", "Vancouver", 49.267651, -123.090412, 1270072800, "http://www.vancommunitylab.com" },
  { "Hackerspace@tamabi", "Japan", "Tokyo", 35.611317, 139.349124, 1270072800, "http://dp.idd.tamabi.ac.jp/hackerspace/" },
  { "BAH", "Argentina", "Capital Federal", 0.000000, 0.000000, 1270072800, "http://www.hackerspace.com.ar" },
  { "Sk1llz Almere", "Netherlands", "Almere", 52.372113, 5.221338, 1270850400, "http://www.sk1llz.nl" },
  { "Open Design City", "Germany", "Berlin", 52.502580, 13.412360, 1271023200, "http://opendesigncity.de" },
  { "Hakkavélin(The Mincer)", "Iceland", "Reykjavik", 64.154313, -21.945952, 1271109600, "http://www.hakkavelin.is" },
  { "Hackers Bike Ride Los Angeles", "United States of America", "Los Angeles", 0.000000, 0.000000, 1271282400, "http://machina.la" },
  { "FNordeingang Neuss", "Germany", "Neuss", 51.186200, 6.692320, 1271800800, "http://www.fnordeingang.de" },
  { "Le-localhost", "France", "Lille", 50.637846, 3.063029, 1272578400, "http://www.le-localhost.org" },
  { "Null Space Labs", "United States of America", "Los Angeles", 34.040211, -118.257027, 1272664800, "http://032.la" },
  { "Artisan's Asylum", "United States of America", "Somerville", 42.375619, -71.093237, 1272664800, "http://www.artisansasylum.com" },
  { "Tangleball", "", "", -36.860075, 174.755253, 1273874400, "http://tangleball.org.nz/" },
  { "Iron Tribe", "United States of America", "White Plains", 41.032087, -73.770093, 1274133600, "http://irontribe.us/" },
  { "Ace Monster Toys", "United States of America", "Emeryville", 37.843354, -122.277002, 1274652000, "http://acemonstertoys.org/" },
  { "Hackerspace Townsville", "Australia", "Townsville", -19.270416, 146.829208, 1274911200, "" },
  { "Progressbar", "Slovakia", "Bratislava", 48.148899, 17.119489, 1275343200, "http://www.progressbar.sk" },
  { "Nesit", "United States of America", "Meriden", 41.541815, -72.789552, 1275343200, "http://www.nesit.net" },
  { "Hackerspace Cholula", "Mexico", "Cholula", 19.051116, -98.302728, 1275343200, "http://hackerspacecholula.org" },
  { "DingFabrik Köln", "Germany", "Cologne", 50.949022, 6.986827, 1275516000, "http://www.dingfabrik.de" },
  { "Blind Security Uganda", "Uganda", "Kampala", 0.274657, 32.618408, 1276293600, "http://www.Blindsecurity.org" },
  { "CCCCCCC", "United States of America", "Atlanta", 33.736114, -84.408157, 1276552800, "" },
  { "Brmlab", "Czech Republic", "Prague", 50.098390, 14.435901, 1277157600, "http://brmlab.cz/" },
  { "Sparvnästet", "Sweden", "Stockholm", 59.300270, 18.011128, 1277244000, "http://www.hemligatradgarden.se" },
  { "HakOlyHak", "United States of America", "Olympia", 46.984918, -122.913438, 1277503200, "http://www.hakolyhak.org" },
  { "SYN Shop", "United States of America", "Las Vegas", 36.092772, -115.129950, 1277935200, "http://synshop.org" },
  { "Bloominglabs", "United States of America", "Bloomington", 39.168160, -86.538483, 1277935200, "http://www.bloominglabs.org" },
  { "Aiki lab", "Syria", "Damascus", 33.521674, 36.288668, 1277935200, "http://www.aikilab.org" },
  { "Nbash", "YEMEN", "TAIZ", 15.552727, 48.516388, 1278885600, "http://nbash.makesboyscrazy.com/" },
  { "Xerocraft", "United States of America", "Tucson", 32.231459, -110.977756, 1279317600, "http://xerocraft.org/" },
  { "Electrolab", "France", "Nanterre", 48.895247, 2.196106, 1280095200, "http://www.electrolab.fr" },
  { "Neucleon", "United States of America", "San Diego", 32.818001, -116.975827, 1280613600, "http://www.Neucleon.org" },
  { "Hackerspace Ffm e.V.", "Germany", "Frankfurt", 0.000000, 0.000000, 1280700000, "http://www.hackerspace-ffm.de" },
  { "SB Hackerspace", "US", "Santa Barbara", 34.406391, -119.697268, 1280700000, "http://sbhackerspace.com" },
  { "DHMN", "United States of America", "Appleton", 44.261931, -88.415385, 1280700000, "http://dhmn.net" },
  { "10BitWorks", "United States of America", "San Antonio", 29.393508, -98.485916, 1281823200, "http://www.10bitworks.com/" },
  { "MakeSLC", "United States of America", "Salt Lake City", 40.757700, -111.901713, 1281823200, "" },
  { "Hackandfab", "Spain", "San Sebastian", 43.316365, -1.909754, 1281823200, "http://www.hackandfab.com" },
  { "HACKingston", "Canada", "Kingston", 44.238230, -76.521172, 1282082400, "http://hackingston.wordpress.com/" },
  { "Edinburgh Hacklab", "United Kingdom", "Edinburgh", 55.964802, -3.174137, 1282600800, "http://www.edinburghhacklab.com/" },
  { "Omaha Maker Group", "United States of America", "Omaha", 41.247063, -96.016796, 1283205600, "http://www.omahamakergroup.org/" },
  { "Sparvnastet", "Sweden", "Stockholm", 59.300270, 18.011128, 1283292000, "http://hemligatradgarden.se/" },
  { "Montana Ethical Hackers", "United States of America", "Helena", 46.599388, -112.014285, 1283292000, "http://www.mthackers.com" },
  { "Splat Space", "", "Durham", 35.996497, -78.903729, 1283292000, "http://splatspace.org" },
  { "TkkrLab", "Netherlands", "Enschede", 52.220337, 6.895964, 1283292000, "http://tkkrlab.nl" },
  { "Hackerspace Szeged", "Hungary", "Szeged", 46.253691, 20.146051, 1283292000, "" },
  { "Ubqt", "France", "Toulouse", 43.378435, 1.403320, 1284242400, "http://ubqt.tv" },
  { "Alpha", "Germany", "Potsdam", 52.396770, 13.036390, 1284674400, "http://alpha.autodidaktikum.de" },
  { "Hackens", "France", "Paris", 48.841888, 2.344029, 1285711200, "http://hackens.org/" },
  { "Nelson Tech Club", "Canada", "Nelson", 49.492209, -117.293544, 1285884000, "http://www.nelson-tech-club.info" },
  { "SideWalkLabs", "United States of America", "Greenville/Anderson", 34.633208, -82.529297, 1285884000, "http://www.sidewalklabs.com" },
  { "Breizh Entropy Lab", "France", "Rennes", 48.106656, -1.651104, 1285884000, "http://www.breizh-entropy.org/" },
  { "WesternMass Hackerspace", "United States of America", "Indian Orchard", 42.160424, -72.505261, 1285884000, "http://www.meetup.com/TheGeekGroupofWesternMass/" },
  { "FOSS Labs", "Russian Federation", "Kazan", 55.790185, 49.123504, 1285884000, "http://fosslabs.ru" },
  { "Turmlabor", "Germany", "Dresden", 51.027240, 13.724200, 1285884000, "http://www.turmlabor.de" },
  { "IT-Syndikat", "Austria", "Innsbruck", 47.257873, 11.396009, 1285884000, "http://it-syndikat.org/" },
  { "Makerspace Victoria", "Canada", "Victoria", 48.556451, -123.403732, 1285884000, "http://www.makerspace.ca" },
  { "SocialGeeks", "United States of America", "Twin Falls", 42.562967, -114.460871, 1286229600, "http://www.socialgeeks.com" },
  { "Hackerspace Charlotte", "United States of America", "Charlotte", 35.248265, -80.806396, 1286316000, "http://www.hackerspacecharlotte.org/" },
  { "PiSeC", "Czech Republic", "Pisek", 49.297485, 14.126402, 1288566000, "http://www.kufr.cz" },
  { "CCCFFM", "Germany", "Frankfurt am Main", 50.103520, 8.618920, 1288566000, "http://ccc-ffm.de" },
  { "Non-kinetic Warfare", "United Stated", "San Antonio", 29.487925, -98.573037, 1288652400, "" },
  { "Racó Nòmada", "Spain", "Elche", 38.277828, -0.724174, 1289516400, "http://www.raconomada.com" },
  { "Syracuse Innovators Guild", "United States of America", "Syracuse", 43.044212, -76.149773, 1290121200, "https://sig315.org" },
  { "Zachack libya hacker", "Libya", "Tripoli", 29.193090, 14.402341, 1290466800, "http://www.zachack.info" },
  { "Laboratory B", "United States of America", "Burlington", 44.487481, -73.208128, 1290812400, "http://laboratoryb.org" },
  { "Hs-garrotxa", "Catalonia", "Olot (La Garrotxa)", 42.181165, 2.485549, 1290812400, "http://hs-garrotxa.hacktivisme.org" },
  { "HackBo", "Colombia", "Bogota", 4.600814, -74.068151, 1291503600, "http://hackbo.co" },
  { "P-Space", "Greece", "Patras", 38.251004, 21.740973, 1292367600, "http://www.p-space.gr" },
  { "HackerSpacePP", "Cambodia", "Phnom Penh", 11.539354, 104.912308, 1293058800, "http://www.hackerspacepp.org/" },
  { "Le Loop", "France", "Paris", 48.868372, 2.360902, 1294095600, "http://www.leloop.org" },
  { "Jakarta, Indonesia", "Indonesia", "Jakarta", -6.253471, 106.832792, 1294182000, "http://space.hackers.co.id" },
  { "Tinker Tank", "United States of America", "Miami", 25.725103, -80.316819, 1294614000, "http://tinkertankmiami.com" },
  { "HackerSpace@GZ", "China", "Guangzhou", 23.125909, 113.318662, 1295391600, "http://www.kevinsmake.com" },
  { NULL, NULL, NULL, 0.0, 0.0, 0, NULL }
};
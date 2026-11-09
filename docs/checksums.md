# Checksums

The files this project was made from, so you can check your copy against them. None of them are
in the repository.

- **Executables and DLLs** are what the Ghidra project analyses. A copy that differs is a
  different build, and annotation addresses won't line up with it. The annotation tools find a
  binary by its MD5, recorded in `annotations/<program>/metadata`.
- **PODs** are the game data. The XXH3-128 column is the hash the recreation recognises a release
  by (see [mod-support.md](mod-support.md)). Nocturne's entries match `recreation/data/releases.toml`.
  `scripts/Python/catalog_release.py` prints them for an install.

Each table is from one retail English install. If yours differs, open an
[issue](https://github.com/NearlyTRex/NocturneDecomp/issues) with your list. It may be another
release worth cataloguing.

## Executables and DLLs

| Ghidra program | File |
|---|---|
| `nocedit.exe` | Nocturne `nocedit.exe` |
| `nocturne.exe` | Nocturne `nocturne.exe` |
| `tridx7.dll` | Nocturne `tridx7.dll` |
| `bw1.exe` | Blair Witch Volume 1 `nocturne.exe` |
| `blairwitch2.exe` | Blair Witch Volume 2 `blairwitch2.exe` |
| `bw3.exe` | Blair Witch Volume 3 `bw3.exe` |

Nocturne's `tridx6.dll` and `tridx7.dll` are the same file. Each Blair Witch game ships its own
`tridx7.dll`: Volumes 1 and 2 share one, Volume 3 has another, and neither is Nocturne's.

### Nocturne

| File | Size | MD5 | SHA-256 |
|---|--:|---|---|
| `nocedit.exe` | 2,786,816 | `2ec4f5687fd417b5c5b9791d82e61a3f` | `29e80ad39e55b5adc2292a60b0d4dc6d509b32fcf43fb4cbf7fa107e8bf112f0` |
| `nocturne.exe` | 1,948,160 | `24acd9b17f6846225123a9d8354b09e1` | `333e12d182294b13ded2ffca4c51828dff663c6c420a8c6c673efbae4b0d7325` |
| `tri3dfx.dll` | 114,688 | `59c8ad340d3a1dd1b1a9a94977547767` | `7f3d88a040b24e9af37d72451ef945407902bf932371b63cb8952a28abeaa020` |
| `trid3d.dll` | 98,304 | `867a34753b3399472f7431fa0919860b` | `fe0bb2317590fbda24f7799b4a2d7061a287d7f033e2585611e923cd50cb753d` |
| `tridx6.dll` | 112,640 | `1b5164e6073ccb4de26885d7c06e769b` | `a272ee4f48f0baec68fb3f633838d41f5fa2bc30c637f82a1deaa862ac3a1c03` |
| `tridx7.dll` | 112,640 | `1b5164e6073ccb4de26885d7c06e769b` | `a272ee4f48f0baec68fb3f633838d41f5fa2bc30c637f82a1deaa862ac3a1c03` |

### Blair Witch Volume 1: Rustin Parr

| File | Size | MD5 | SHA-256 |
|---|--:|---|---|
| `nocturne.exe` | 2,380,288 | `d9275a1f1373cef40ca44436d2f12275` | `c30b8ba37ea7a2aae2375e18d07ea6bef8ff20cbb01b980c6192a4175123719f` |
| `tridx7.dll` | 112,128 | `e55edd67494aadaffedcd66818be4066` | `676fd68b1841132d50c81c5aac3fdcc482f57ccc260ceabe11676cdf3782b1cc` |

### Blair Witch Volume 2: The Legend of Coffin Rock

| File | Size | MD5 | SHA-256 |
|---|--:|---|---|
| `blairwitch2.exe` | 2,352,128 | `76857532e2031e0a017010151c263e4a` | `2b7d2c49a1d61277627f3969237b493932d131e8a8b26f97b09a585c04c6aa2d` |
| `FFC10.dll` | 126,976 | `84526e28c354c045062576f5bae5742e` | `d4e88d9028e86894be5c61c62c7a0f648a032032d545a37834813389d61354a3` |
| `TRID3D.DLL` | 99,328 | `7e5ab8b82c4305b2076f15294a39a00e` | `5490b81a9a061f2601ea9070061a89534755a298ec122c4070f085cd7bfe3c8e` |
| `tridx6.dll` | 117,760 | `c07fb759b4cb8498afe585e992775d67` | `e9c2caad42e66ce65cde87fa37242c7ab839a50094ee6a73c4c5c32c252767b0` |
| `tridx7.dll` | 112,128 | `e55edd67494aadaffedcd66818be4066` | `676fd68b1841132d50c81c5aac3fdcc482f57ccc260ceabe11676cdf3782b1cc` |
| `TRIGL.DLL` | 73,728 | `9c586f09fb2ad22ee5e009067e389b8e` | `1d1ceb3a8e607a2f7dbb8b2ea149ff7867f74651b7dbb8cf45bc6e2359ad1a99` |
| `triglide.dll` | 74,752 | `736e628d5c4d290ccc102c96b0bafb20` | `94bed6b35693fac05a7c349b7f5443d233e062560bda1196659a947a751b2906` |

### Blair Witch Volume 3: The Elly Kedward Tale

| File | Size | MD5 | SHA-256 |
|---|--:|---|---|
| `bw3.exe` | 2,250,240 | `e6d52d0dd2ce5f54e8eb08403abd80d2` | `a4f181f28de7cb827e055f52365699173076e935d98d3ac7dff402095dd1fb22` |
| `tridx7.dll` | 112,128 | `30b0e83e717abf4ad4286b1959cb7c69` | `60c98e8ead143a8e29304b46a9820b8c210c89172a924e3f35ee74aea39bf128` |

## PODs

### Nocturne

| POD | Size | MD5 | XXH3-128 |
|---|--:|---|---|
| `ACT1.POD` | 11,550,130 | `f03ddf6cea696600107234f3e0274833` | `b8a086b973c62dd8e71eafb51015af35` |
| `ACT1SND.POD` | 11,299,886 | `3af83dbbcf7f3a649887daa6ca0c6e16` | `9aad0924f80e4e13c398ac047a40e614` |
| `ACT2.POD` | 9,054,297 | `201aa8ab15bc116b65c46e0de6bd6e91` | `d9c1e477d69a977f7bbf9c49a5caecb2` |
| `act2snd.pod` | 13,577,936 | `57c6457f7ae31f5ca2fbd8c4841087df` | `f1de0061cfd4a86796e2a562477ec149` |
| `ACT3.POD` | 29,336,425 | `6073db4ed13dc979dd6075b28a71a207` | `9a5f17a10676c6acd0053f9b74e6f876` |
| `act3snd.pod` | 26,069,450 | `7d1aa2156f3b30753959dfd3c0423848` | `a756680904be9ddd8abd5e356f295324` |
| `ACT4.POD` | 10,197,985 | `ca5a1e2621ef12cb7bac3d7b9ce9d763` | `b696c74e40a62eb7a165d58649a7f4fa` |
| `ACT4SND.POD` | 6,957,369 | `d255c8971d9f5a635bdf2a16b3cbe643` | `d5c16584f27b3225221f40e1febc7f07` |
| `ACT5.POD` | 1,274,794 | `34450b2c7d57bedfb1a57b6e4694f8bd` | `39174137b885b70ae30091b80aba000a` |
| `ACT5SND.POD` | 25,441 | `e7fb39d75942f280309d3c2e6f15f6c9` | `6e0ec5c790b4114c84fcc416c706ca4f` |
| `castle.pod` | 66,293,695 | `9076c4ad4d36cc82b7443d8c9a148541` | `1832e8436ee2cebcad9e20bf4a46f011` |
| `chicago.pod` | 102,366,326 | `94c824278d0d76bafd42786d1b05c7a8` | `1b0e0a45d1e69aefa3851761c5aec42e` |
| `DUNGEON.POD` | 37,162,349 | `fd2da62ac05215c113fe832d43bc797c` | `b263a3398d3dc8a63757346abaf5aea4` |
| `enemy.pod` | 61,331,990 | `311eb11bc05518e635126836cdb0bf37` | `39c3af631309666316153f7304f68738` |
| `ENGLISH.POD` | 23,246,970 | `515ba50c977adb21f9f8fe18a55a683b` | `13cb4379c9d7a969dbced4e8326898d3` |
| `FACTORY.POD` | 20,685,575 | `abc9e18740dea18f685d08c0ac30581d` | `eeedbbbfbd4a6a90fec0c5f7b0923117` |
| `forest.pod` | 71,671,112 | `784d7ae81e15db9c04738ea9f95fca77` | `ccd6284cb2d8cf3db8349aa1fa91c356` |
| `GRAVE.POD` | 57,677,842 | `96dc851cc65acedf5eab480a6e2b8a01` | `59d0af9bc8991fb0164c79a41629fd3a` |
| `GTOWN.POD` | 47,793,179 | `2b081f45e5ea093b0a6c1e9d9eb12314` | `4b830fb329798dca1e266ab218a733cb` |
| `hero.pod` | 35,187,958 | `be3cac317947136dbfb54d85ece639ae` | `1ec87305f22a700c4ac76b8483f7807a` |
| `HQ.POD` | 18,446,627 | `5c3d471e2d86fdd4d3f14f41bc75a9c0` | `32cc3b106b36d97351f7685761f08858` |
| `HQWRECK.POD` | 18,046,985 | `8a4df566b07cd6f30f8ad34c1e24bf47` | `9f3b0a6f8f59b17dae71250af9d406dd` |
| `INTFACT.POD` | 23,710,255 | `131aeda41b7a3c82c63ae0072929bc38` | `cac1579438fc4f81ac06934fad3d2a68` |
| `MANSION.POD` | 73,765,503 | `b02f6830ca97d88645ea370b51d5fbf3` | `a318beeeb9f4a0112ea5e1eca17d48c1` |
| `mine.pod` | 40,616,719 | `9679ec634353dd23bf18e404e4885f54` | `cb4a1d4d0211181a0b9a966bdd92449f` |
| `MOVIE3.POD` | 9,118,503 | `b5db619ceda56bdaed0cd2c4061f27c2` | `81e91c6f66c12b238e034cd24173f41c` |
| `MOVIE4.POD` | 11,609,493 | `b8fa61596cc4747fa343b28acb605eb9` | `9d5319c0d13f02328ecf3932867a37d3` |
| `MOVIE5.POD` | 16,589,607 | `fd75f696cb08e56403afa4bf51f4d261` | `4cfcef79b3b88f1bcb93598366f3841e` |
| `music.pod` | 33,296,815 | `1c0317be8b328f2fb8d304f0dd4c9a04` | `94f269d4e2252b69dc87589f179fa096` |
| `npc.pod` | 32,097,316 | `50df51dc68213528129fc5ef82e17435` | `41a9360ad3393a3157abc971065dd062` |
| `SOUND.POD` | 81,149,498 | `3e775e165f05c7a7046c386d6c526c97` | `5d33f558aa3660a42376d21fc9286582` |
| `SPEAK.POD` | 9,116,660 | `c9e3c35a5bdcdf22dd16ef0b49941f25` | `d80224f5e7215489aac1ba1703dcbcf6` |
| `STARTUP.POD` | 30,025,625 | `97090b51caeb04790eb7653a0a3a5ab7` | `408d46be88e10bf5e93ea6aecc4ae673` |
| `temple.pod` | 38,410,752 | `47b3b5dddc9382c009833e4cc3649c6b` | `a885903c4b22e5f4eb14b2ad301f5654` |
| `tground.pod` | 4,315,796 | `515013dbbc56352ca4b65d7a8aa348b7` | `d851e1f8f8ee60e2d5415f08dc7b020d` |
| `theater.pod` | 44,732,475 | `4d8da3f62c43c23cb09ef69a45b8f314` | `6c8861040add84ff6154287d3cefc565` |
| `town.pod` | 47,259,097 | `7095f1c013fe90ffd82b4735cc47e99b` | `601e9f8fba0544b731518424a32be9ba` |
| `train.pod` | 26,546,027 | `a006c0e6f5e64bf9f97a3ad0b2401df1` | `4090d56d1092e3f652d2bdfaf712a6b3` |
| `TRANS.POD` | 6,915,910 | `b2bcb33ebdd091c4cc3681c2645b2fb6` | `686b4c4bbd2754af55890b60e0a80773` |
| `WARE2.POD` | 36,989,845 | `0022d6288a34163184608c7dda23ef7e` | `c2b7cff399a61389b93d5ec869cf4ea1` |
| `WWORKS.POD` | 8,357,404 | `18f0f6464e4d57b2e4614bd0ed837063` | `b6a2ed00c138473f49aa182f498d7a02` |

### Blair Witch Volume 1: Rustin Parr

| POD | Size | MD5 | XXH3-128 |
|---|--:|---|---|
| `AZCABINSET.POD` | 13,693,872 | `30f323f5ff4b5c7b792dc0e2f31a35bc` | `66ca40206bb2d8574434c932b3770b0d` |
| `AZLOOPSET.POD` | 29,030,739 | `ce71d3ae7f77ef4d211d0f6775320d7d` | `ac97851c0968c52548cab352827cdbbe` |
| `BLAIRENEMY.POD` | 41,867,987 | `9f9f660ddbf7bad267e66fc427c39c27` | `a837bd1d1850b0effebe7d777e6e9b9b` |
| `BLAIRHERO.POD` | 5,066,704 | `7e7d7c5044c2c28c6c7cccd282fab76d` | `1b336b56554ca20c70e53c897c4c7b40` |
| `BLAIRNPC.POD` | 14,058,040 | `51ceed80efbc6122a8c3c38f14aee62e` | `3e28dda9c97b962d01384ac14980b183` |
| `BURKTOWNSET.POD` | 52,043,097 | `1d324bfe3b66825ff3830db82249a1b0` | `fad735c97b6acccd2e8f7cc73c4a45c7` |
| `BWBITMAP.POD` | 12,675,131 | `0f3d1647c5c93dfc7b09c62569b0ca4f` | `caba99a39c22c1e9fcc497d6d7d776a4` |
| `CHECKINROOMSET.POD` | 6,494,336 | `fd6bd48e46606d345b00406eda218721` | `0163ff105f40fc484f5dee46bcf42050` |
| `CHINSIDESET.POD` | 10,880,573 | `653344a5e6cdd1a1f7f9b88a8f2016db` | `5f28833249c62ba6272bd701edb7e3e2` |
| `CHOONLOOPSET.POD` | 24,737,296 | `8f3fb61c7ccf27ef2eb699a5156633f9` | `c25d5c51da2b7c1dc6ff29c33f85e5b1` |
| `DKPLOOPSET.POD` | 24,711,846 | `eb015a555db8e89501976115bc3042a1` | `dc52999608f18394ffd74f14b1000dea` |
| `DNINSIDESET.POD` | 10,634,284 | `e973b311196a0180273e3cf757de2961` | `8454d8cfe98fa3cb32354e2d3ae12ad9` |
| `ENG_DB.POD` | 733,034 | `ab86998a49e314f193774a0c99eaefbb` | `0e1b6549b6fe96bf843508500021f6e8` |
| `ENGLISH.POD` | 36,868,965 | `247c22081b7ba05aa11dd7c5658bc90d` | `ffccba29a8dd0ef0633986e05d127b7c` |
| `EXECROOMSET.POD` | 24,498,639 | `28cf9e50d4866c70194be25bb172d6c3` | `a3b76562a022900663c040c50a5533dc` |
| `FIELDNOTES.POD` | 9,583,571 | `0800a4bafd3868d307920b0e2d96b5d8` | `2cc6f06c5226f96f75930b6238f983c2` |
| `Forestmsn.pod` | 5,842,746 | `91f207914c5ca3f96802ff5b86fe267f` | `b084f96cb46c6d5822122bf746170abf` |
| `GEN2LOOPSET.POD` | 16,959,337 | `a3c743598aa4ea76e7bf48dd9443bc6c` | `595eb0bd3483495c56fdbbbbfc9c823a` |
| `GEN3LOOPSET.POD` | 17,285,801 | `f515235f784f19bdf1abb443fbb08b04` | `06ff04771b59e6b069d5cdab427fcd37` |
| `GENLOOPSET.POD` | 23,817,716 | `95f4cfa31b266190ed68d13061f96cc1` | `667d6ddea8acec6fed46d8feb97f199b` |
| `GSTRINSIDESET.POD` | 7,417,235 | `69fa37a262e595c48175894abcfec0a6` | `6e9d7c0c1e30d84b8328012441aa4bbf` |
| `Hqbwmsn.pod` | 2,842,890 | `6e9e1dc923de3e15eb024ec496b7eba2` | `6be065d44020eaddf42b3d90ee37e976` |
| `HQBWSET.POD` | 25,196,299 | `45f57831d5467a5057327b824e32e6a6` | `8ef12560e955fa43e44d8c8bd7c6accb` |
| `LIBINSIDESET.POD` | 7,593,998 | `9df59558a39b849c3eaf0630630bfdda` | `25f7d8891d3f1810fa813ee2cf9099d2` |
| `M1INSIDESET.POD` | 7,185,272 | `3df1575b740e552cc45d6a518e408448` | `ecd265566618d519e751189b067dc9a0` |
| `M2INSIDESET.POD` | 11,341,454 | `a05d16c60edc69feb20dcf2768e9296e` | `203dead92046eb7429495cc70c0d9cbb` |
| `music.pod` | 89,122,629 | `d5c1a8d700a3dd408b1fedf9e0ce8057` | `670bcd9a2f8e56e8b8ed1f1ce4e3f549` |
| `NEVLOOPSET.POD` | 21,565,170 | `82cfb2a380ca82a6104e06ae3f25e005` | `246044611373b1ab7ccd33d165618c31` |
| `NEVURGIVNSET.POD` | 21,726,443 | `1ad818ada4f8b83acfcd94f04015ad8f` | `7735d5975b3090bf19ef57befe76554f` |
| `NPINSIDESET.POD` | 9,006,126 | `858163fc6fafa7d21d27ad320a749a52` | `c85376635bf305eefcc82f6c0acc511e` |
| `PARRHOUSESET.POD` | 12,956,021 | `1b3719fb8529eaba0d2a73c079923a6d` | `ece950a3ce067defb071d329c4b8b28d` |
| `PARRLOOPSET.POD` | 25,703,972 | `411fca48456db5830137a135ceb8d003` | `10bafa01dce788a094536b4b31f3b992` |
| `POINSIDESET.POD` | 3,424,595 | `2755c2e192f3bb286a5d0824416b846e` | `b5de64cbd148dde4cae651de0095036c` |
| `RWHOUSESET.POD` | 23,542,769 | `df307c474bbded6203226b09611a561c` | `64fc0a138e64b8f8ff159f5bd0875815` |
| `SCHINSIDESET.POD` | 7,852,403 | `f8aaede0fccd56378904ba96c23f0157` | `933e66eeb9e1e808ac6b4d07b325c2bd` |
| `SKELETON.POD` | 14,408,918 | `60c9b2915ecbaa882cd3b53ca36c1f69` | `ef142da68abed49b96e73963924f4dc1` |
| `SOUND.POD` | 205,137,953 | `ce1922f8ee8b69a7327e8ee3cfe298bd` | `30e3ba122e1ff8bd7b670033fb36eb43` |
| `STARTUP.POD` | 42,156,958 | `0258062098326dc3fb6e10aea3d8f452` | `2e688f8aab3fa9d0a920c1d17c540692` |
| `THALLINSIDESET.POD` | 13,643,555 | `c86ac74e6d4660589632b41be7d619cf` | `50ff68ac1d56e5a6c6e3f75ed63155f8` |
| `TOWNLOOPSET.POD` | 26,077,332 | `0133a99c16bf892eef4c4be66e4da241` | `f9cacd584389ae87f460e4598745ff9b` |
| `Townmsn.pod` | 11,979,163 | `0252efe3500c7b401025dcf6e79d6253` | `ce6b94f6ff68896835ab4eac9df96beb` |

### Blair Witch Volume 2: The Legend of Coffin Rock

There is no `STARTUP.POD`, but there is an `HH_STARTUP.POD`. The install also has loose files
under `WORLD/` and `video/`, and lists its 29 PODs in `pod.bak.ini` rather than `pod.ini`.

| POD | Size | MD5 | XXH3-128 |
|---|--:|---|---|
| `AWAKENING.POD` | 19,531,716 | `e2aa9db0b372d42a2b490782facb9e2c` | `4c7f7739c676f4f5c03d5457583f96b4` |
| `BURKTOWN.POD` | 34,647,450 | `fb484d805aed19fb8e257102d73f1fbc` | `6ae2b250c0255643b6d5ee9fc073fb61` |
| `BW2_EFFECTS.POD` | 2,585,997 | `314f07028c090c601d61dc5b7ff0c32b` | `95058d0cf1aece1accbc9a4ed33726cc` |
| `BW2_ENEMIES.POD` | 19,100,123 | `61d60e8c68d3928661e36acf0c1c55a3` | `7d7586ff1829c5d96f880b94d00bf4c4` |
| `CAMP.POD` | 24,167,531 | `8c56d5d9c38944b0b73768d55b235488` | `401ab55963a0a49a23f6d297e8c9cf47` |
| `CAVES.POD` | 18,963,950 | `ef7534fc421b24d1a7c5c99e36d91f05` | `6a1c9b36fc84a4f3675f71baa8e6b404` |
| `CEMETERY.POD` | 45,746,716 | `c0badbe8691878b9ddb0f332f8234923` | `4d9c5f0ec964e7fcf1c753480db6e896` |
| `COFF_ROCK.POD` | 48,560,243 | `db137c52c922f5ae4fee9d987365e114` | `7bd8fbf96fd0f1294bff9029b586690e` |
| `D_TREE_ENEMIES.POD` | 1,574,205 | `93fe883fa6deed4d0c5a9e5b5fb995eb` | `2d3e7702196acf6b02a60ff18e9bcd3b` |
| `D_TREEMSN.POD` | 1,350,411 | `227b2acfd1ebecaffda5e501b837ee05` | `2c9596f3e967ff01ab52f20665802716` |
| `DEATH_TREE.POD` | 22,699,243 | `07689fc9bea017f47297edcde8702a19` | `d70ff6e346a76ce49df32075c306985c` |
| `DIRT_ROAD.POD` | 8,531,677 | `199ce7d97b0fafb490b578d0ca333b22` | `f1fd9236ea7154f4180163890d75c004` |
| `ENGLISH.POD` | 39,327 | `193e2da5963415ca0ad17fbd7d6764c0` | `5bf5f8ba14455519a0883db8fc888d8e` |
| `HH_MUSIC.POD` | 151,869,598 | `46f77c98eb77ff28ad83d7568011f92a` | `d05a5007e80ce9396754dcbd15e86393` |
| `HH_SKELETON.POD` | 34,029,994 | `b3fcce4f37b7d34d3e4acf8c97d2395e` | `c0563f36472e13536ea3be4e569cf322` |
| `HH_SOUNDS.POD` | 145,271,257 | `6864e8958833eb91d03e889d9c3e87bd` | `1737a981560752d5b10d42e94fb99a9e` |
| `HH_STARTUP.POD` | 29,337,266 | `1776e57c9f95e1d86cc31c6f5050a4c6` | `9ccfc5d37a9452c8e807bba8f20eac46` |
| `HH_VOICES.POD` | 24,594,122 | `214652a72786275f67585edc76758b70` | `45c0d6b13bc0253de73f1ed8986319de` |
| `LAZ00.POD` | 395,604 | `b67488da66b58905d2cc50f33d116267` | `715015efa38149c5136ebb8b32ead50f` |
| `Laz63.pod` | 398,680 | `e7d8bc501b60869a81d252dff91d89f3` | `de2af16389430503938b8f7ad63e7512` |
| `LAZ86.POD` | 449,064 | `f5413d941064bb07d739c0d775e55cde` | `f25638ab4cf7b97f4655d721e0d966d8` |
| `LAZGHOST.POD` | 749,823 | `f76c3716f4e797568af3a3905cb125bf` | `5a4bd098228ee310eede4133a3e27bb0` |
| `MAZE.POD` | 70,531,489 | `2edd013896a1fdad855fd2e10881ac4b` | `182323c0229a16a93d2d946b1b4dfb02` |
| `PATHS.POD` | 49,085,721 | `1c9c512507410fb85fc3989968f15783` | `e257ef137e55f7cb38e1fff4f536b418` |
| `RAVINE.POD` | 24,747,723 | `fddd1c12768fc15c110660448bcbc4da` | `9d537ee58c52be226b84fdd43a72d932` |
| `RR_XING.POD` | 43,461,150 | `236162d404f1bd182e8db32418ee2b3e` | `73dff85e41a4a89cd9c73b634bbd0e29` |
| `Steubhouse.pod` | 24,979,818 | `acf3d400ef68699fb9807fb11bb69659` | `74265f4a727e1cd67566a4f50366e760` |
| `WNDCRKCRSS.POD` | 10,442,379 | `3a703921c7dac5bdbd3b81ca57f85dc9` | `5a85e4c8a45ff24dcc9312ca46c7ecb5` |
| `WVRFARM.POD` | 60,666,702 | `c743a91de527bb3a9ccdbf249ca45308` | `e0b9ce786e4fdfed4556cd6ba3b85f3b` |

### Blair Witch Volume 3: The Elly Kedward Tale

| POD | Size | MD5 | XXH3-128 |
|---|--:|---|---|
| `BWBITMAP.POD` | 9,226,502 | `67f28bd5206bbe50783aa27ec71330e5` | `fce7062534d6cabdffa401c36697a314` |
| `BWV3.POD` | 875,299,135 | `d154315a0db7b6a1f205167ab4fc2249` | `1d9c5571fddd984dbb7d58bcf0a0e0c7` |
| `English.pod` | 25,859,256 | `a649754fabbc5363cd1a2bdd879354b1` | `68b563b8134e72065ffcf2484b4aa6d8` |
| `FIELDNOTES.POD` | 9,645,783 | `1b893e199ae17c13bbeb322f7704543b` | `e3e42ca262caa1472e6ff44eddd694d9` |
| `music.pod` | 15,639,864 | `6361951b7d660e75bc08f910b018e528` | `14b7a54a81a28df941710089c0e2fe94` |
| `SOUND.POD` | 52,981,921 | `386e7afc1e99ba59bd7722191461c894` | `79e72ea24cc46d0f2480cefd4b8a252b` |
| `STARTUP.POD` | 42,166,577 | `257cf5c070422f5062f91493887ee5dd` | `ca2273b92e4aee218b1d08340ff7d289` |
| `WORLD.POD` | 8,073,881 | `c9bd5d2a893b228bc66de4d6d552737a` | `0da524ba5fab3bfacedd6e2e5ceeba79` |

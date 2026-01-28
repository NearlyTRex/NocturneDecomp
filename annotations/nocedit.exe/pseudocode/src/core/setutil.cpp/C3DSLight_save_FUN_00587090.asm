; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,FILE *file_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_ptr
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 at 0057a4c4
;
; Referenced Globals:
;   TerminatedCString s_light_name_006497dc
;   TerminatedCString s_s_00649804
;   TerminatedCString s_pos_00649808
;   TerminatedCString s_f_f_f_0064980d
;   TerminatedCString s_orient_00649817
;   TerminatedCString s_f_f_f_0064981f
;   TerminatedCString s_fov_00649829
;   TerminatedCString s_f_0064982e
;   TerminatedCString s_aspect_00649832
;   TerminatedCString s_f_0064983a
;   TerminatedCString s_intensity_0064983e
;   TerminatedCString s_f_00649849
;   TerminatedCString s_type_0064984d
;   TerminatedCString s_d_00649853
;   TerminatedCString s_R_G_B_attenStart_attenEn_00649857
;   ... and 17 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587090
        ;   Label: core_setutil.cpp_C3DSLight_save_FUN_00587090
    PUSH ESI                            ; 00587091
    PUSH EDI                            ; 00587092
    PUSH EBP                            ; 00587093
    MOV EDI,dword ptr [ESP + 0x18]      ; 00587094
    PUSH 0x6497dc                       ; 00587098 | = "-- light name ------------------------\n"
    PUSH EDI                            ; 0058709d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058709e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005870a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005870a6
    ADD EBX,0x4                         ; 005870aa
    PUSH EBX                            ; 005870ad
    PUSH 0x649804                       ; 005870ae | = "%s\n"
    PUSH EDI                            ; 005870b3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005870b4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005870b9
    PUSH 0x649808                       ; 005870bc | = "pos\n"
    PUSH EDI                            ; 005870c1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005870c2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005870c7
    MOV EAX,dword ptr [ESP + 0x14]      ; 005870ca
    SUB ESP,0x8                         ; 005870ce
    FLD float ptr [EAX + 0x10c]         ; 005870d1
    FSTP double ptr [ESP]               ; 005870d7
    SUB ESP,0x8                         ; 005870da
    FLD float ptr [EAX + 0x108]         ; 005870dd
    FSTP double ptr [ESP]               ; 005870e3
    SUB ESP,0x8                         ; 005870e6
    FLD float ptr [EAX + 0x104]         ; 005870e9
    FSTP double ptr [ESP]               ; 005870ef
    PUSH 0x64980d                       ; 005870f2 | = "%f,%f,%f\n"
    PUSH EDI                            ; 005870f7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005870f8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 005870fd
    PUSH 0x649817                       ; 00587100 | = "orient\n"
    PUSH EDI                            ; 00587105
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587106
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0058710b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058710e
    SUB ESP,0x8                         ; 00587112
    FLD float ptr [EAX + 0x114]         ; 00587115
    FSTP double ptr [ESP]               ; 0058711b
    SUB ESP,0x8                         ; 0058711e
    FLD float ptr [EAX + 0x118]         ; 00587121
    FSTP double ptr [ESP]               ; 00587127
    SUB ESP,0x8                         ; 0058712a
    FLD float ptr [EAX + 0x110]         ; 0058712d
    FSTP double ptr [ESP]               ; 00587133
    PUSH 0x64981f                       ; 00587136 | = "%f,%f,%f\n"
    PUSH EDI                            ; 0058713b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058713c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00587141
    PUSH 0x649829                       ; 00587144 | = "fov\n"
    PUSH EDI                            ; 00587149
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058714a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0058714f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587152
    SUB ESP,0x8                         ; 00587156
    FLD float ptr [EAX + 0x11c]         ; 00587159
    FSTP double ptr [ESP]               ; 0058715f
    PUSH 0x64982e                       ; 00587162 | = "%f\n"
    PUSH EDI                            ; 00587167
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587168
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0058716d
    PUSH 0x649832                       ; 00587170 | = "aspect\n"
    PUSH EDI                            ; 00587175
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587176
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0058717b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058717e
    SUB ESP,0x8                         ; 00587182
    FLD float ptr [EAX + 0x120]         ; 00587185
    FSTP double ptr [ESP]               ; 0058718b
    PUSH 0x64983a                       ; 0058718e | = "%f\n"
    PUSH EDI                            ; 00587193
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587194
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00587199
    PUSH 0x64983e                       ; 0058719c | = "intensity\n"
    PUSH EDI                            ; 005871a1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005871a2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005871a7
    MOV EAX,dword ptr [ESP + 0x14]      ; 005871aa
    SUB ESP,0x8                         ; 005871ae
    FLD float ptr [EAX + 0x124]         ; 005871b1
    FSTP double ptr [ESP]               ; 005871b7
    PUSH 0x649849                       ; 005871ba | = "%f\n"
    PUSH EDI                            ; 005871bf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005871c0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 005871c5
    PUSH 0x64984d                       ; 005871c8 | = "type\n"
    PUSH EDI                            ; 005871cd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005871ce
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005871d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005871d6
    MOV EDX,dword ptr [EAX]             ; 005871da
    PUSH EDX                            ; 005871dc
    PUSH 0x649853                       ; 005871dd | = "%d\n"
    PUSH EDI                            ; 005871e2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005871e3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005871e8
    PUSH 0x649857                       ; 005871eb | = "R,G,B, attenStart, attenEnd\n"
    PUSH EDI                            ; 005871f0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005871f1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005871f6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005871f9
    SUB ESP,0x8                         ; 005871fd
    FLD float ptr [EAX + 0x11d4]        ; 00587200
    FSTP double ptr [ESP]               ; 00587206
    SUB ESP,0x8                         ; 00587209
    FLD float ptr [EAX + 0x11d0]        ; 0058720c
    FSTP double ptr [ESP]               ; 00587212
    SUB ESP,0x8                         ; 00587215
    FLD float ptr [EAX + 0x11cc]        ; 00587218
    FSTP double ptr [ESP]               ; 0058721e
    SUB ESP,0x8                         ; 00587221
    FLD float ptr [EAX + 0x11c8]        ; 00587224
    FSTP double ptr [ESP]               ; 0058722a
    SUB ESP,0x8                         ; 0058722d
    FLD float ptr [EAX + 0x11c4]        ; 00587230
    FSTP double ptr [ESP]               ; 00587236
    PUSH 0x649874                       ; 00587239 | = "%f,%f,%f,%f,%f\n"
    PUSH EDI                            ; 0058723e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058723f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x30                        ; 00587244
    PUSH 0x649884                       ; 00587247 | = "sizeX, sizeY\n"
    PUSH EDI                            ; 0058724c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058724d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00587252
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587255
    MOV ECX,dword ptr [EAX + 0x180c]    ; 00587259
    PUSH ECX                            ; 0058725f
    MOV EBX,dword ptr [EAX + 0x1808]    ; 00587260
    PUSH EBX                            ; 00587266
    PUSH 0x649892                       ; 00587267 | = "%d,%d\n"
    PUSH EDI                            ; 0058726c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058726d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00587272
    PUSH 0x649899                       ; 00587275 | = "filterCount\n"
    PUSH EDI                            ; 0058727a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058727b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00587280
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587283
    MOV ESI,dword ptr [EAX + 0x11ec]    ; 00587287
    PUSH ESI                            ; 0058728d
    PUSH 0x6498a6                       ; 0058728e | = "%d\n"
    PUSH EDI                            ; 00587293
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587294
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00587299
    PUSH 0x6498aa                       ; 0058729c | = "blendFilter\n"
    PUSH EDI                            ; 005872a1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005872a2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005872a7
    MOV EAX,dword ptr [ESP + 0x14]      ; 005872aa
    MOV EBP,dword ptr [EAX + 0x11f0]    ; 005872ae
    PUSH EBP                            ; 005872b4
    PUSH 0x6498b7                       ; 005872b5 | = "%d\n"
    PUSH EDI                            ; 005872ba
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005872bb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005872c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005872c3
    MOV EDX,dword ptr [EAX + 0x11ec]    ; 005872c7
    XOR ESI,ESI                         ; 005872cd
    TEST EDX,EDX                        ; 005872cf
    JLE 0x00587320                      ; 005872d1
        ;   XREF to: 00587320 (CONDITIONAL_JUMP)  ; LAB_00587320
    LEA EBP,[EAX + 0x11f4]              ; 005872d3
    MOV EBX,EAX                         ; 005872d9
    PUSH EBP                            ; 005872db
        ;   Label: LAB_005872db
    MOV ECX,dword ptr [EBX + 0x1774]    ; 005872dc
    PUSH ECX                            ; 005872e2
    SUB ESP,0x8                         ; 005872e3
    FLD float ptr [EBX + 0x16f4]        ; 005872e6
    FSTP double ptr [ESP]               ; 005872ec
    PUSH 0x6498bb                       ; 005872ef | = "%f,%d,%s\n"
    PUSH EDI                            ; 005872f4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005872f5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x18                        ; 005872fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 005872fd
    ADD EBX,0x4                         ; 00587301
    INC ESI                             ; 00587304
    MOV EDX,dword ptr [EAX + 0x11ec]    ; 00587305
    ADD EBP,0x28                        ; 0058730b
    CMP ESI,EDX                         ; 0058730e
    JL 0x005872db                       ; 00587310
        ;   XREF to: 005872db (CONDITIONAL_JUMP)  ; LAB_005872db
    LEA EAX,[EAX]                       ; 00587312
    LEA EDX,[EDX]                       ; 00587318
    MOV EAX,EAX                         ; 0058731e
    PUSH 0x6498c5                       ; 00587320 | = "filterFrame\n"
        ;   Label: LAB_00587320
    PUSH EDI                            ; 00587325
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587326
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0058732b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058732e
    MOV ECX,dword ptr [EAX + 0x1890]    ; 00587332
    PUSH ECX                            ; 00587338
    PUSH 0x6498d2                       ; 00587339 | = "%d\n"
    PUSH EDI                            ; 0058733e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058733f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00587344
    PUSH 0x6498d6                       ; 00587347 | = "moveFilter,filterVelX,filterVelY,filt..."
    PUSH EDI                            ; 0058734c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058734d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00587352
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587355
    MOV EBX,dword ptr [EAX + 0x1804]    ; 00587359
    PUSH EBX                            ; 0058735f
    MOV ESI,dword ptr [EAX + 0x1800]    ; 00587360
    PUSH ESI                            ; 00587366
    MOV EBP,dword ptr [EAX + 0x17fc]    ; 00587367
    PUSH EBP                            ; 0058736d
    MOV EDX,dword ptr [EAX + 0x17f8]    ; 0058736e
    PUSH EDX                            ; 00587374
    MOV ECX,dword ptr [EAX + 0x17f4]    ; 00587375
    PUSH ECX                            ; 0058737b
    PUSH 0x64990e                       ; 0058737c | = "%d,%d,%d,%d,%d\n"
    PUSH EDI                            ; 00587381
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587382
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 00587387
    PUSH 0x64991e                       ; 0058738a | = "onTime, cycleTime\n"
    PUSH EDI                            ; 0058738f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587390
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00587395
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587398
    SUB ESP,0x8                         ; 0058739c
    FLD float ptr [EAX + 0x11e4]        ; 0058739f
    FSTP double ptr [ESP]               ; 005873a5
    SUB ESP,0x8                         ; 005873a8
    FLD float ptr [EAX + 0x11e0]        ; 005873ab
    FSTP double ptr [ESP]               ; 005873b1
    PUSH 0x649931                       ; 005873b4 | = "%f,%f\n"
    PUSH EDI                            ; 005873b9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005873ba
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x18                        ; 005873bf
    PUSH 0x649938                       ; 005873c2 | = "visible\n"
    PUSH EDI                            ; 005873c7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005873c8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005873cd
    MOV EBX,dword ptr [ESP + 0x14]      ; 005873d0
    XOR EBP,EBP                         ; 005873d4
    LEA ESI,[EBX + 0xfa]                ; 005873d6
    CMP byte ptr [EBX + 0x128],0x0      ; 005873dc
        ;   Label: LAB_005873dc
    JZ 0x005873e6                       ; 005873e3
        ;   XREF to: 005873e6 (CONDITIONAL_JUMP)  ; LAB_005873e6
    INC EBP                             ; 005873e5
    INC EBX                             ; 005873e6
        ;   Label: LAB_005873e6
    CMP EBX,ESI                         ; 005873e7
    JNZ 0x005873dc                      ; 005873e9
        ;   XREF to: 005873dc (CONDITIONAL_JUMP)  ; LAB_005873dc
    PUSH EBP                            ; 005873eb
    PUSH 0x649941                       ; 005873ec | = "%d\n"
    PUSH EDI                            ; 005873f1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005873f2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005873f7
    MOV EBP,dword ptr [ESP + 0x14]      ; 005873fa
    XOR ESI,ESI                         ; 005873fe
    MOV EBX,EBP                         ; 00587400
    CMP byte ptr [EBP + 0x128],0x0      ; 00587402
        ;   Label: LAB_00587402
    JZ 0x00587436                       ; 00587409
        ;   XREF to: 00587436 (CONDITIONAL_JUMP)  ; LAB_00587436
    MOV EAX,dword ptr [EBX + 0x230]     ; 0058740b
    PUSH EAX                            ; 00587411
    MOV EDX,dword ptr [EBX + 0x22c]     ; 00587412
    PUSH EDX                            ; 00587418
    MOV ECX,dword ptr [EBX + 0x228]     ; 00587419
    PUSH ECX                            ; 0058741f
    MOV EAX,dword ptr [EBX + 0x224]     ; 00587420
    PUSH EAX                            ; 00587426
    PUSH ESI                            ; 00587427
    PUSH 0x649945                       ; 00587428 | = "%d,%d,%d,%d,%d\n"
    PUSH EDI                            ; 0058742d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058742e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 00587433
    ADD EBX,0x10                        ; 00587436
        ;   Label: LAB_00587436
    INC ESI                             ; 00587439
    INC EBP                             ; 0058743a
    CMP ESI,0xfa                        ; 0058743b
    JL 0x00587402                       ; 00587441
        ;   XREF to: 00587402 (CONDITIONAL_JUMP)  ; LAB_00587402
    POP EBP                             ; 00587443
    POP EDI                             ; 00587444
    POP ESI                             ; 00587445
    POP EBX                             ; 00587446
    RET                                 ; 00587447


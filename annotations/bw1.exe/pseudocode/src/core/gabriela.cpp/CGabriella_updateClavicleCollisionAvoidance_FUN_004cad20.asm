; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20(CGabriella *this_ptr,float delta_time,int has_carried_objects)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   has_carried_objects
; Local Variables:
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6c97
;
; Referenced Globals:
;   undefined4 DAT_00600d6c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01cc910c
;   undefined4 DAT_01cc9110
;   undefined4 DAT_01cc9148
;   undefined4 DAT_01cc914c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gabriela.cpp_FUN_004caff0
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_skeleton.cpp_FUN_00568100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cad20
        ;   Label: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20
    PUSH ESI                            ; 004cad21
    PUSH EDI                            ; 004cad22
    PUSH EBP                            ; 004cad23
    SUB ESP,0xa0                        ; 004cad24
    MOV EBX,dword ptr [ESP + 0xb4]      ; 004cad2a
    FLD float ptr [ESP + 0xb8]          ; 004cad31
    FLD float ptr [EBX + 0x1ffc8]       ; 004cad38
    FLD float ptr [EBX + 0x1ffcc]       ; 004cad3e
    FXCH ST2                            ; 004cad44
    FDIV float ptr [0x00600d6c]         ; 004cad46 | DAT_00600d6c
    FXCH                                ; 004cad4c
    FSUB ST0,ST1                        ; 004cad4e
    FXCH ST2                            ; 004cad50
    FSUBRP                              ; 004cad52
    FXCH                                ; 004cad54
    FSTP float ptr [EBX + 0x1ffc8]      ; 004cad56
    FSTP float ptr [EBX + 0x1ffcc]      ; 004cad5c
    FLD float ptr [EBX + 0x1ffc8]       ; 004cad62
    FLDZ                                ; 004cad68
    FCOMPP                              ; 004cad6a
    FNSTSW AX                           ; 004cad6c
    SAHF                                ; 004cad6e
    JA 0x004caf69                       ; 004cad6f
        ;   XREF to: 004caf69 (CONDITIONAL_JUMP)  ; LAB_004caf69
    FLD float ptr [EBX + 0x1ffcc]       ; 004cad75
        ;   Label: LAB_004cad75
    FLDZ                                ; 004cad7b
    FCOMPP                              ; 004cad7d
    FNSTSW AX                           ; 004cad7f
    SAHF                                ; 004cad81
    JBE 0x004cad8e                      ; 004cad82
        ;   XREF to: 004cad8e (CONDITIONAL_JUMP)  ; LAB_004cad8e
    MOV dword ptr [EBX + 0x1ffcc],0x0   ; 004cad84
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004cad8e
        ;   Label: LAB_004cad8e
    TEST EDX,EDX                        ; 004cad95
    JZ 0x004caf95                       ; 004cad97
        ;   XREF to: 004caf95 (CONDITIONAL_JUMP)  ; LAB_004caf95
    PUSH EBX                            ; 004cad9d
    MOV EBP,dword ptr [0x00622c18]      ; 004cad9e | g_CDemonSetPtr
    PUSH EBP                            ; 004cada4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004cada5
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004cadaa
    ADD ESP,0x8                         ; 004cadb0
    TEST EAX,EAX                        ; 004cadb3
    JZ 0x004cadc7                       ; 004cadb5
        ;   XREF to: 004cadc7 (CONDITIONAL_JUMP)  ; LAB_004cadc7
    PUSH EAX                            ; 004cadb7
    MOV ECX,dword ptr [0x00622c18]      ; 004cadb8 | g_CDemonSetPtr
    PUSH ECX                            ; 004cadbe | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004cadbf
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cadc4
    MOV ESI,dword ptr [EBX + 0x2628]    ; 004cadc7
        ;   Label: LAB_004cadc7
    TEST ESI,ESI                        ; 004cadcd
    JZ 0x004cade1                       ; 004cadcf
        ;   XREF to: 004cade1 (CONDITIONAL_JUMP)  ; LAB_004cade1
    PUSH ESI                            ; 004cadd1
    MOV EBP,dword ptr [0x00622c18]      ; 004cadd2 | g_CDemonSetPtr
    PUSH EBP                            ; 004cadd8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004cadd9
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cadde
    MOV EAX,[0x00622c18]                ; 004cade1 | g_CDemonSetPtr
        ;   Label: LAB_004cade1
    PUSH EAX                            ; 004cade6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0 ; 004cade7
        ;   XREF to: 005592b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cadec
    XOR EDX,EDX                         ; 004cadef
    MOV dword ptr [ESP + 0x98],EDX      ; 004cadf1
    MOV dword ptr [ESP + 0x94],EDX      ; 004cadf8
    MOV dword ptr [ESP + 0x90],EDX      ; 004cadff
    MOV EDI,dword ptr [EBX + 0x25b0]    ; 004cae06
    TEST EDI,EDI                        ; 004cae0c
    JZ 0x004caf78                       ; 004cae0e
        ;   XREF to: 004caf78 (CONDITIONAL_JUMP)  ; LAB_004caf78
    PUSH EDI                            ; 004cae14
    MOV EDX,dword ptr [EDI + 0x154]     ; 004cae15
    LEA ESI,[ESP + 0x4]                 ; 004cae1b
    CALL dword ptr [EDX + 0x1c]         ; 004cae1f
    MOV ECX,0x6                         ; 004cae22
    LEA EDI,[ESP + 0x4c]                ; 004cae27
    LEA ESI,[ESP + 0x4]                 ; 004cae2b
    ADD ESP,0x4                         ; 004cae2f
    LEA EAX,[ESP + 0x48]                ; 004cae32
    MOVSD.REP ES:EDI,ESI                ; 004cae36
    FLD float ptr [EAX + 0xc]           ; 004cae38
    FLD float ptr [EAX + 0x10]          ; 004cae3b
    FLD float ptr [EAX + 0x14]          ; 004cae3e
    LEA EDI,[ESP + 0x84]                ; 004cae41
    LEA ESI,[ESP + 0x60]                ; 004cae48
    FXCH ST2                            ; 004cae4c
    FSUB float ptr [ESP + 0x48]         ; 004cae4e
    FXCH                                ; 004cae52
    FSUB float ptr [ESP + 0x4c]         ; 004cae54
    FXCH ST2                            ; 004cae58
    FSUB float ptr [ESP + 0x50]         ; 004cae5a
    FXCH                                ; 004cae5e
    FSTP float ptr [ESP + 0x60]         ; 004cae60
    FXCH                                ; 004cae64
    FSTP float ptr [ESP + 0x64]         ; 004cae66
    FSTP float ptr [ESP + 0x68]         ; 004cae6a
    MOVSD ES:EDI,ESI                    ; 004cae6e
    MOVSD ES:EDI,ESI                    ; 004cae6f
    MOVSD ES:EDI,ESI                    ; 004cae70
    FLD float ptr [ESP + 0x8c]          ; 004cae71
    FCHS                                ; 004cae78
    FSTP float ptr [ESP + 0x90]         ; 004cae7a
    LEA EAX,[ESP + 0x90]                ; 004cae81
        ;   Label: LAB_004cae81
    PUSH EAX                            ; 004cae88
    MOV EAX,[0x01cc910c]                ; 004cae89 | DAT_01cc910c
    PUSH EAX                            ; 004cae8e
    MOV EDX,dword ptr [0x01cc9148]      ; 004cae8f | DAT_01cc9148
    PUSH EDX                            ; 004cae95
    LEA EAX,[EBX + 0x1ffc8]             ; 004cae96
    PUSH EAX                            ; 004cae9c
    PUSH dword ptr [ESP + 0xc8]         ; 004cae9d
    PUSH EBX                            ; 004caea4
    CALL core_gabriela.cpp_FUN_004caff0 ; 004caea5
        ;   XREF to: 004caff0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004caff0()
    MOV ECX,dword ptr [EBX + 0x2628]    ; 004caeaa
    ADD ESP,0x18                        ; 004caeb0
    TEST ECX,ECX                        ; 004caeb3
    JZ 0x004caf88                       ; 004caeb5
        ;   XREF to: 004caf88 (CONDITIONAL_JUMP)  ; LAB_004caf88
    PUSH ECX                            ; 004caebb
    MOV EDX,dword ptr [ECX + 0x154]     ; 004caebc
    LEA ESI,[ESP + 0x34]                ; 004caec2
    LEA EDI,[ESP + 0x1c]                ; 004caec6
    CALL dword ptr [EDX + 0x1c]         ; 004caeca
    MOV ECX,0x6                         ; 004caecd
    LEA ESI,[ESP + 0x34]                ; 004caed2
    ADD ESP,0x4                         ; 004caed6
    LEA EAX,[ESP + 0x18]                ; 004caed9
    MOVSD.REP ES:EDI,ESI                ; 004caedd
    FLD float ptr [EAX + 0xc]           ; 004caedf
    FLD float ptr [EAX + 0x10]          ; 004caee2
    FLD float ptr [EAX + 0x14]          ; 004caee5
    LEA EDI,[ESP + 0x6c]                ; 004caee8
    LEA ESI,[ESP + 0x78]                ; 004caeec
    FXCH ST2                            ; 004caef0
    FSUB float ptr [ESP + 0x18]         ; 004caef2
    FXCH                                ; 004caef6
    FSUB float ptr [ESP + 0x1c]         ; 004caef8
    FXCH ST2                            ; 004caefc
    FSUB float ptr [ESP + 0x20]         ; 004caefe
    FXCH                                ; 004caf02
    FSTP float ptr [ESP + 0x78]         ; 004caf04
    FXCH                                ; 004caf08
    FSTP float ptr [ESP + 0x7c]         ; 004caf0a
    FSTP float ptr [ESP + 0x80]         ; 004caf0e
    MOVSD ES:EDI,ESI                    ; 004caf15
    MOVSD ES:EDI,ESI                    ; 004caf16
    MOVSD ES:EDI,ESI                    ; 004caf17
    MOV EAX,dword ptr [ESP + 0x74]      ; 004caf18
    MOV dword ptr [ESP + 0x90],EAX      ; 004caf1c
    LEA EAX,[ESP + 0x90]                ; 004caf23
        ;   Label: LAB_004caf23
    PUSH EAX                            ; 004caf2a
    MOV EDI,dword ptr [0x01cc9110]      ; 004caf2b | DAT_01cc9110
    PUSH EDI                            ; 004caf31
    MOV EBP,dword ptr [0x01cc914c]      ; 004caf32 | DAT_01cc914c
    PUSH EBP                            ; 004caf38
    LEA EAX,[EBX + 0x1ffcc]             ; 004caf39
    PUSH EAX                            ; 004caf3f
    PUSH dword ptr [ESP + 0xc8]         ; 004caf40
    PUSH EBX                            ; 004caf47
    CALL core_gabriela.cpp_FUN_004caff0 ; 004caf48
        ;   XREF to: 004caff0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004caff0()
    ADD ESP,0x18                        ; 004caf4d
    MOV EAX,[0x00622c18]                ; 004caf50 | g_CDemonSetPtr
    PUSH EAX                            ; 004caf55 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004caf56
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004caf5b
    ADD ESP,0xa0                        ; 004caf5e
    POP EBP                             ; 004caf64
    POP EDI                             ; 004caf65
    POP ESI                             ; 004caf66
    POP EBX                             ; 004caf67
    RET                                 ; 004caf68
    MOV dword ptr [EBX + 0x1ffc8],0x0   ; 004caf69
        ;   Label: LAB_004caf69
    JMP 0x004cad75                      ; 004caf73
        ;   XREF to: 004cad75 (UNCONDITIONAL_JUMP)  ; LAB_004cad75
    MOV dword ptr [ESP + 0x90],0xbf000000 ; 004caf78
        ;   Label: LAB_004caf78
    JMP 0x004cae81                      ; 004caf83
        ;   XREF to: 004cae81 (UNCONDITIONAL_JUMP)  ; LAB_004cae81
    MOV dword ptr [ESP + 0x90],0x3f000000 ; 004caf88
        ;   Label: LAB_004caf88
    JMP 0x004caf23                      ; 004caf93
        ;   XREF to: 004caf23 (UNCONDITIONAL_JUMP)  ; LAB_004caf23
    PUSH 0x567360                       ; 004caf95
        ;   Label: LAB_004caf95
    MOV ECX,dword ptr [0x01cc910c]      ; 004caf9a | DAT_01cc910c
    PUSH ECX                            ; 004cafa0
    PUSH dword ptr [EBX + 0x1ffc8]      ; 004cafa1
    PUSH 0x0                            ; 004cafa7
    PUSH EDX                            ; 004cafa9
    LEA ESI,[EBX + 0x158]               ; 004cafaa
    PUSH ESI                            ; 004cafb0
    CALL core_skeleton.cpp_FUN_00568100 ; 004cafb1
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    ADD ESP,0x18                        ; 004cafb6
    PUSH 0x567360                       ; 004cafb9
    MOV EDI,dword ptr [0x01cc9110]      ; 004cafbe | DAT_01cc9110
    PUSH EDI                            ; 004cafc4
    PUSH dword ptr [EBX + 0x1ffcc]      ; 004cafc5
    PUSH 0x0                            ; 004cafcb
    PUSH 0x0                            ; 004cafcd
    PUSH ESI                            ; 004cafcf
    CALL core_skeleton.cpp_FUN_00568100 ; 004cafd0
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    ADD ESP,0x18                        ; 004cafd5
    ADD ESP,0xa0                        ; 004cafd8
    POP EBP                             ; 004cafde
    POP EDI                             ; 004cafdf
    POP ESI                             ; 004cafe0
    POP EBX                             ; 004cafe1
    RET                                 ; 004cafe2


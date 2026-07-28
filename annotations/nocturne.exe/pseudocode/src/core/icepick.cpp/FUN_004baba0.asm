; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004baba0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_icepick.cpp_FUN_004b9fe0 at 004ba306
;
; Referenced Globals:
;   double DOUBLE_00586202 = 6
;   double DOUBLE_0058620a = 0.318309886192889
;   double DOUBLE_00586212 = 4
;   double DOUBLE_0058621a = 10
;   double DOUBLE_00586222 = -0.25
;   double DOUBLE_0058622a = 0.25
;   double DOUBLE_00586232 = 3.14159265350000
;   double DOUBLE_0058623a = -3.14159265350000
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_FUN_0042af70
;   core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baba0
        ;   Label: core_icepick.cpp_FUN_004baba0
    PUSH ESI                            ; 004baba1
    PUSH EDI                            ; 004baba2
    PUSH EBP                            ; 004baba3
    MOV EBP,ESP                         ; 004baba4
    SUB ESP,0xa8                        ; 004baba6
    AND ESP,0xfffffff8                  ; 004babac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004babaf
    MOV EDX,0x3e800000                  ; 004babb2
    MOV ECX,0x3f490fdb                  ; 004babb7
    PUSH 0x2c                           ; 004babbc
    XOR ESI,ESI                         ; 004babbe
    MOV EDI,dword ptr [0x01cae0e8]      ; 004babc0 | DAT_01cae0e8
    PUSH ESI                            ; 004babc6
    LEA EAX,[EBX + 0xbc94]              ; 004babc7
    MOV dword ptr [ESP + 0xa4],EDX      ; 004babcd
    PUSH EAX                            ; 004babd4
    MOV dword ptr [ESP + 0xa0],ECX      ; 004babd5
    MOV EDI,dword ptr [EDI*0x4 + 0x1cae0d8] ; 004babdc
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004babe3
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fa38]   ; 004babe8
    ADD ESP,0xc                         ; 004babee
    TEST EAX,EAX                        ; 004babf1
    JZ 0x004bafe7                       ; 004babf3
        ;   XREF to: 004bafe7 (CONDITIONAL_JUMP)  ; LAB_004bafe7
    MOV EAX,[0x01cae0e8]                ; 004babf9 | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 004babfe
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004bac01
    FLD float ptr [EDX]                 ; 004bac08
    FSUB float ptr [EAX + 0x20]         ; 004bac0a
    FSTP float ptr [ESP + 0x4c]         ; 004bac0d
    FLD float ptr [EDX + 0x4]           ; 004bac11
    FSUB float ptr [EAX + 0x24]         ; 004bac14
    FST float ptr [ESP + 0x50]          ; 004bac17
    FMUL float ptr [ESP + 0x50]         ; 004bac1b
    FLD float ptr [ESP + 0x4c]          ; 004bac1f
    FMUL ST0                            ; 004bac23
    FLD float ptr [EDX + 0x8]           ; 004bac25
    FSUB float ptr [EAX + 0x28]         ; 004bac28
    FXCH                                ; 004bac2b
    FADDP ST2,ST0                       ; 004bac2d
    FST float ptr [ESP + 0x54]          ; 004bac2f
    FMUL float ptr [ESP + 0x54]         ; 004bac33
    FADDP                               ; 004bac37
    FSQRT                               ; 004bac39
    MOV EDX,dword ptr [EBX + 0x1fa38]   ; 004bac3b
    FSTP float ptr [ESP + 0x88]         ; 004bac41
    CMP EDX,0x3                         ; 004bac48
    JNZ 0x004bac54                      ; 004bac4b
        ;   XREF to: 004bac54 (CONDITIONAL_JUMP)  ; LAB_004bac54
    MOV dword ptr [ESP + 0x88],ESI      ; 004bac4d
    MOV dword ptr [ESP + 0x90],0x41a00000 ; 004bac54
        ;   Label: LAB_004bac54
    MOV EAX,[0x01cae0e8]                ; 004bac5f | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004bac64
    PUSH EAX                            ; 004bac6b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bac6c
    CALL dword ptr [EDX + 0x140]        ; 004bac72
    ADD ESP,0x4                         ; 004bac78
    TEST EAX,EAX                        ; 004bac7b
    JZ 0x004bac8a                       ; 004bac7d
        ;   XREF to: 004bac8a (CONDITIONAL_JUMP)  ; LAB_004bac8a
    MOV dword ptr [ESP + 0x90],0x41f00000 ; 004bac7f
    FLD float ptr [ESP + 0x88]          ; 004bac8a
        ;   Label: LAB_004bac8a
    FCOMP float ptr [ESP + 0x90]        ; 004bac91
    FNSTSW AX                           ; 004bac98
    SAHF                                ; 004bac9a
    JNC 0x004baceb                      ; 004bac9b
        ;   XREF to: 004baceb (CONDITIONAL_JUMP)  ; LAB_004baceb
    MOV ECX,dword ptr [EBX + 0x1fa38]   ; 004bac9d
    CMP ECX,0x2                         ; 004baca3
    JNZ 0x004bafee                      ; 004baca6
        ;   XREF to: 004bafee (CONDITIONAL_JUMP)  ; LAB_004bafee
    LEA EAX,[ESP + 0x7c]                ; 004bacac
        ;   Label: LAB_004bacac
    PUSH EAX                            ; 004bacb0
    MOV EDX,0x461c3f9a                  ; 004bacb1
    PUSH EBX                            ; 004bacb6
    MOV dword ptr [ESP + 0x84],EDX      ; 004bacb7
    CALL core_hero.cpp_CHero_closestEnemy_FUN_004b5d00 ; 004bacbe
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_closestEnemy_FUN_004b5d00()
    MOV EDX,EAX                         ; 004bacc3
    ADD ESP,0x8                         ; 004bacc5
    TEST EAX,EAX                        ; 004bacc8
    JZ 0x004baffc                       ; 004bacca
        ;   XREF to: 004baffc (CONDITIONAL_JUMP)  ; LAB_004baffc
    FLD float ptr [ESP + 0x7c]          ; 004bacd0
    FCOMP float ptr [ESP + 0x90]        ; 004bacd4
    FNSTSW AX                           ; 004bacdb
    SAHF                                ; 004bacdd
    JNC 0x004baffc                      ; 004bacde
        ;   XREF to: 004baffc (CONDITIONAL_JUMP)  ; LAB_004baffc
    MOV ESI,0x1                         ; 004bace4
    MOV EDI,EDX                         ; 004bace9
    LEA EDX,[EDI + 0x20]                ; 004baceb
        ;   Label: LAB_004baceb
    LEA EAX,[EBX + 0x20]                ; 004bacee
    FLD float ptr [EDX]                 ; 004bacf1
    FSUB float ptr [EAX]                ; 004bacf3
    FSTP float ptr [ESP + 0x40]         ; 004bacf5
    FLD float ptr [EDX + 0x4]           ; 004bacf9
    FSUB float ptr [EAX + 0x4]          ; 004bacfc
    FSTP float ptr [ESP + 0x44]         ; 004bacff
    FLD float ptr [EDX + 0x8]           ; 004bad03
    LEA EDX,[ESP + 0x40]                ; 004bad06
    FSUB float ptr [EAX + 0x8]          ; 004bad0a
    LEA EAX,[ESP + 0x4c]                ; 004bad0d
    FSTP float ptr [ESP + 0x48]         ; 004bad11
    CMP EAX,EDX                         ; 004bad15
    JZ 0x004bad31                       ; 004bad17
        ;   XREF to: 004bad31 (CONDITIONAL_JUMP)  ; LAB_004bad31
    MOV EAX,dword ptr [ESP + 0x40]      ; 004bad19
    MOV dword ptr [ESP + 0x4c],EAX      ; 004bad1d
    MOV EAX,dword ptr [ESP + 0x44]      ; 004bad21
    MOV dword ptr [ESP + 0x50],EAX      ; 004bad25
    MOV EAX,dword ptr [ESP + 0x48]      ; 004bad29
    MOV dword ptr [ESP + 0x54],EAX      ; 004bad2d
    FLD float ptr [ESP + 0x50]          ; 004bad31
        ;   Label: LAB_004bad31
    FMUL ST0                            ; 004bad35
    FLD float ptr [ESP + 0x4c]          ; 004bad37
    FMUL ST0                            ; 004bad3b
    FADDP                               ; 004bad3d
    FLD float ptr [ESP + 0x54]          ; 004bad3f
    FMUL ST0                            ; 004bad43
    FADDP                               ; 004bad45
    FSQRT                               ; 004bad47
    MOV dword ptr [EBX + 0x2410],0x0    ; 004bad49
    FSTP float ptr [ESP + 0xa0]         ; 004bad53
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004bad5a
    FLD float ptr [ESP + 0xa0]          ; 004bad61
    MOV dword ptr [ESP + 0x24],EAX      ; 004bad68
    FCOMP double ptr [0x00586202]       ; 004bad6c | DOUBLE_00586202
    FNSTSW AX                           ; 004bad72
    SAHF                                ; 004bad74
    JNC 0x004bb0d1                      ; 004bad75
        ;   XREF to: 004bb0d1 (CONDITIONAL_JUMP)  ; LAB_004bb0d1
    LEA EAX,[EBX + 0x150]               ; 004bad7b
    CMP ESI,0x1                         ; 004bad81
    JNZ 0x004bb040                      ; 004bad84
        ;   XREF to: 004bb040 (CONDITIONAL_JUMP)  ; LAB_004bb040
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004bad8a
    JNZ 0x004bb018                      ; 004bad91
        ;   XREF to: 004bb018 (CONDITIONAL_JUMP)  ; LAB_004bb018
    MOV dword ptr [EBX + 0xbcac],ESI    ; 004bad97
    MOV dword ptr [EBX + 0x2dbc],0x0    ; 004bad9d
        ;   Label: LAB_004bad9d
    CMP ESI,0x1                         ; 004bada7
        ;   Label: LAB_004bada7
    JNZ 0x004bae75                      ; 004badaa
        ;   XREF to: 004bae75 (CONDITIONAL_JUMP)  ; LAB_004bae75
    LEA EAX,[ESP + 0x4c]                ; 004badb0
    PUSH EAX                            ; 004badb4
    LEA EAX,[ESP + 0x68]                ; 004badb5
    PUSH EAX                            ; 004badb9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004badba
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004badbf
    ADD ESP,0x8                         ; 004badc2
    FSUB float ptr [EBX + 0x34]         ; 004badc5
    SUB ESP,0x4                         ; 004badc8
    FSTP float ptr [ESP]                ; 004badcb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004badce
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004badd3
    FLD float ptr [ESP + 0xa8]          ; 004badda
    FMUL double ptr [0x0058620a]        ; 004bade1 | DOUBLE_0058620a
    ADD ESP,0x4                         ; 004bade7
    FMUL double ptr [0x00586212]        ; 004badea | DOUBLE_00586212
    FLD float ptr [ESP + 0x9c]          ; 004badf0
    FCHS                                ; 004badf7
    FSTP float ptr [ESP + 0x84]         ; 004badf9
    FST float ptr [EBX + 0xbcb8]        ; 004bae00
    FCOMP float ptr [ESP + 0x84]        ; 004bae06
    FNSTSW AX                           ; 004bae0d
    SAHF                                ; 004bae0f
    JNC 0x004bae1f                      ; 004bae10
        ;   XREF to: 004bae1f (CONDITIONAL_JUMP)  ; LAB_004bae1f
    MOV EAX,dword ptr [ESP + 0x84]      ; 004bae12
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004bae19
    FLD float ptr [EBX + 0xbcb8]        ; 004bae1f
        ;   Label: LAB_004bae1f
    FCOMP float ptr [ESP + 0x9c]        ; 004bae25
    FNSTSW AX                           ; 004bae2c
    SAHF                                ; 004bae2e
    JBE 0x004bae3e                      ; 004bae2f
        ;   XREF to: 004bae3e (CONDITIONAL_JUMP)  ; LAB_004bae3e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004bae31
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004bae38
    FLD float ptr [EBX + 0xbcb8]        ; 004bae3e
        ;   Label: LAB_004bae3e
    FST double ptr [ESP + 0x18]         ; 004bae44
    FCOMP double ptr [0x00586222]       ; 004bae48 | DOUBLE_00586222
    FNSTSW AX                           ; 004bae4e
    SAHF                                ; 004bae50
    JBE 0x004bae75                      ; 004bae51
        ;   XREF to: 004bae75 (CONDITIONAL_JUMP)  ; LAB_004bae75
    FLD double ptr [ESP + 0x18]         ; 004bae53
    FCOMP double ptr [0x0058622a]       ; 004bae57 | DOUBLE_0058622a
    FNSTSW AX                           ; 004bae5d
    SAHF                                ; 004bae5f
    JNC 0x004bae75                      ; 004bae60
        ;   XREF to: 004bae75 (CONDITIONAL_JUMP)  ; LAB_004bae75
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004bae62
    JZ 0x004bae75                       ; 004bae69
        ;   XREF to: 004bae75 (CONDITIONAL_JUMP)  ; LAB_004bae75
    MOV dword ptr [EBX + 0xbcb8],0x0    ; 004bae6b
    FLDZ                                ; 004bae75
        ;   Label: LAB_004bae75
    FLD float ptr [EBX + 0x2410]        ; 004bae77
    FSTP double ptr [ESP + 0x8]         ; 004bae7d
    FCOMP double ptr [ESP + 0x8]        ; 004bae81
    FNSTSW AX                           ; 004bae85
    SAHF                                ; 004bae87
    JNC 0x004bb285                      ; 004bae88
        ;   XREF to: 004bb285 (CONDITIONAL_JUMP)  ; LAB_004bb285
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004bae8e
    MOV dword ptr [EBX + 0x2410],0x0    ; 004bae95
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004bae9f
    LEA EAX,[EBX + 0x20]                ; 004baea5
        ;   Label: LAB_004baea5
    FLD float ptr [EDI + 0x20]          ; 004baea8
    FSUB float ptr [EAX]                ; 004baeab
    FSTP float ptr [ESP + 0x58]         ; 004baead
    FLD float ptr [EDI + 0x24]          ; 004baeb1
    FSUB float ptr [EAX + 0x4]          ; 004baeb4
    LEA EDX,[ESP + 0x4c]                ; 004baeb7
    FSTP float ptr [ESP + 0x5c]         ; 004baebb
    FLD float ptr [EDI + 0x28]          ; 004baebf
    FSUB float ptr [EAX + 0x8]          ; 004baec2
    LEA EAX,[ESP + 0x58]                ; 004baec5
    FSTP float ptr [ESP + 0x60]         ; 004baec9
    CMP EDX,EAX                         ; 004baecd
    JZ 0x004baee9                       ; 004baecf
        ;   XREF to: 004baee9 (CONDITIONAL_JUMP)  ; LAB_004baee9
    MOV EAX,dword ptr [ESP + 0x58]      ; 004baed1
    MOV dword ptr [ESP + 0x4c],EAX      ; 004baed5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004baed9
    MOV dword ptr [ESP + 0x50],EAX      ; 004baedd
    MOV EAX,dword ptr [ESP + 0x60]      ; 004baee1
    MOV dword ptr [ESP + 0x54],EAX      ; 004baee5
    LEA EAX,[ESP + 0x4c]                ; 004baee9
        ;   Label: LAB_004baee9
    PUSH EAX                            ; 004baeed
    LEA EAX,[ESP + 0x38]                ; 004baeee
    PUSH EAX                            ; 004baef2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004baef3
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 004baef8
    LEA EAX,[ESP + 0x54]                ; 004baefa
    ADD ESP,0x8                         ; 004baefe
    CMP EAX,EDX                         ; 004baf01
    JZ 0x004baf19                       ; 004baf03
        ;   XREF to: 004baf19 (CONDITIONAL_JUMP)  ; LAB_004baf19
    MOV EAX,dword ptr [EDX]             ; 004baf05
    MOV dword ptr [ESP + 0x4c],EAX      ; 004baf07
    MOV EAX,dword ptr [EDX + 0x4]       ; 004baf0b
    MOV dword ptr [ESP + 0x50],EAX      ; 004baf0e
    MOV EAX,dword ptr [EDX + 0x8]       ; 004baf12
    MOV dword ptr [ESP + 0x54],EAX      ; 004baf15
    FLD float ptr [ESP + 0x50]          ; 004baf19
        ;   Label: LAB_004baf19
    FSUB float ptr [EBX + 0x34]         ; 004baf1d
    SUB ESP,0x4                         ; 004baf20
    FSTP float ptr [ESP]                ; 004baf23
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004baf26
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004baf2b
    FLD float ptr [ESP + 0xa8]          ; 004baf32
    ADD ESP,0x4                         ; 004baf39
    FST float ptr [ESP + 0x2c]          ; 004baf3c
    FCOMP float ptr [ESP + 0x94]        ; 004baf40
    FNSTSW AX                           ; 004baf47
    SAHF                                ; 004baf49
    JBE 0x004baf57                      ; 004baf4a
        ;   XREF to: 004baf57 (CONDITIONAL_JUMP)  ; LAB_004baf57
    MOV EAX,dword ptr [ESP + 0x94]      ; 004baf4c
    MOV dword ptr [ESP + 0x2c],EAX      ; 004baf53
    FLD float ptr [ESP + 0x2c]          ; 004baf57
        ;   Label: LAB_004baf57
    FLD float ptr [ESP + 0x94]          ; 004baf5b
    FCHS                                ; 004baf62
    FSTP float ptr [ESP + 0x8c]         ; 004baf64
    FCOMP float ptr [ESP + 0x8c]        ; 004baf6b
    FNSTSW AX                           ; 004baf72
    SAHF                                ; 004baf74
    JNC 0x004baf82                      ; 004baf75
        ;   XREF to: 004baf82 (CONDITIONAL_JUMP)  ; LAB_004baf82
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004baf77
    MOV dword ptr [ESP + 0x2c],EAX      ; 004baf7e
    FLD float ptr [ESP + 0x2c]          ; 004baf82
        ;   Label: LAB_004baf82
    FLD float ptr [EBP + 0x18]          ; 004baf86
    FXCH                                ; 004baf89
    FSUB float ptr [EBX + 0x1fa50]      ; 004baf8b
    FXCH                                ; 004baf91
    FMUL double ptr [0x00586232]        ; 004baf93 | DOUBLE_00586232
    FXCH                                ; 004baf99
    FST float ptr [ESP + 0x20]          ; 004baf9b
    FXCH                                ; 004baf9f
    FSTP double ptr [ESP]               ; 004bafa1
    FCOMP double ptr [ESP]              ; 004bafa4
    FNSTSW AX                           ; 004bafa7
    SAHF                                ; 004bafa9
    JBE 0x004bafb3                      ; 004bafaa
        ;   XREF to: 004bafb3 (CONDITIONAL_JUMP)  ; LAB_004bafb3
    FLD double ptr [ESP]                ; 004bafac
    FSTP float ptr [ESP + 0x20]         ; 004bafaf
    FLD float ptr [EBP + 0x18]          ; 004bafb3
        ;   Label: LAB_004bafb3
    FMUL double ptr [0x0058623a]        ; 004bafb6 | DOUBLE_0058623a
    FLD float ptr [ESP + 0x20]          ; 004bafbc
    FXCH                                ; 004bafc0
    FSTP double ptr [ESP + 0x10]        ; 004bafc2
    FCOMP double ptr [ESP + 0x10]       ; 004bafc6
    FNSTSW AX                           ; 004bafca
    SAHF                                ; 004bafcc
    JNC 0x004bafd7                      ; 004bafcd
        ;   XREF to: 004bafd7 (CONDITIONAL_JUMP)  ; LAB_004bafd7
    FLD double ptr [ESP + 0x10]         ; 004bafcf
    FSTP float ptr [ESP + 0x20]         ; 004bafd3
    FLD float ptr [EBX + 0x1fa50]       ; 004bafd7
        ;   Label: LAB_004bafd7
    FADD float ptr [ESP + 0x20]         ; 004bafdd
    FSTP float ptr [EBX + 0x1fa50]      ; 004bafe1
    MOV ESP,EBP                         ; 004bafe7
        ;   Label: LAB_004bafe7
    POP EBP                             ; 004bafe9
    POP EDI                             ; 004bafea
    POP ESI                             ; 004bafeb
    POP EBX                             ; 004bafec
    RET                                 ; 004bafed
    CMP ECX,0x3                         ; 004bafee
        ;   Label: LAB_004bafee
    JZ 0x004bacac                       ; 004baff1
        ;   XREF to: 004bacac (CONDITIONAL_JUMP)  ; LAB_004bacac
    JMP 0x004baceb                      ; 004baff7
        ;   XREF to: 004baceb (UNCONDITIONAL_JUMP)  ; LAB_004baceb
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004baffc
        ;   Label: LAB_004baffc
    JZ 0x004baceb                       ; 004bb003
        ;   XREF to: 004baceb (CONDITIONAL_JUMP)  ; LAB_004baceb
    MOV dword ptr [EBX + 0xbcac],0x1    ; 004bb009
    JMP 0x004baceb                      ; 004bb013
        ;   XREF to: 004baceb (UNCONDITIONAL_JUMP)  ; LAB_004baceb
    PUSH EAX                            ; 004bb018
        ;   Label: LAB_004bb018
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004bb019
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004bb01e
    ADD ESP,0x4                         ; 004bb021
    CMP EAX,0x2                         ; 004bb024
    JZ 0x004bad9d                       ; 004bb027
        ;   XREF to: 004bad9d (CONDITIONAL_JUMP)  ; LAB_004bad9d
    CMP EAX,ESI                         ; 004bb02d
    JZ 0x004bad9d                       ; 004bb02f
        ;   XREF to: 004bad9d (CONDITIONAL_JUMP)  ; LAB_004bad9d
    MOV dword ptr [EBX + 0xbca0],ESI    ; 004bb035
    JMP 0x004bad9d                      ; 004bb03b
        ;   XREF to: 004bad9d (UNCONDITIONAL_JUMP)  ; LAB_004bad9d
    PUSH EAX                            ; 004bb040
        ;   Label: LAB_004bb040
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004bb041
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004bb046
    ADD ESP,0x4                         ; 004bb049
    CMP EAX,0xa                         ; 004bb04c
    JNZ 0x004bb064                      ; 004bb04f
        ;   XREF to: 004bb064 (CONDITIONAL_JUMP)  ; LAB_004bb064
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004bb051
    JZ 0x004bb064                       ; 004bb058
        ;   XREF to: 004bb064 (CONDITIONAL_JUMP)  ; LAB_004bb064
    MOV dword ptr [EBX + 0xbcac],0x1    ; 004bb05a
    MOV EAX,[0x01cae0e8]                ; 004bb064 | DAT_01cae0e8
        ;   Label: LAB_004bb064
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004bb069
    PUSH EAX                            ; 004bb070
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bb071
    CALL dword ptr [EDX + 0x140]        ; 004bb077
    ADD ESP,0x4                         ; 004bb07d
    TEST EAX,EAX                        ; 004bb080
    JNZ 0x004bada7                      ; 004bb082
        ;   XREF to: 004bada7 (CONDITIONAL_JUMP)  ; LAB_004bada7
    PUSH dword ptr [EBP + 0x18]         ; 004bb088
    PUSH EBX                            ; 004bb08b
    CALL core_charactr.cpp_FUN_0042af70 ; 004bb08c
        ;   XREF to: 0042af70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042af70()
    ADD ESP,0x8                         ; 004bb091
    CMP EAX,0x1                         ; 004bb094
    JC 0x004bada7                       ; 004bb097
        ;   XREF to: 004bada7 (CONDITIONAL_JUMP)  ; LAB_004bada7
    JA 0x004bb0c7                       ; 004bb09d
        ;   XREF to: 004bb0c7 (CONDITIONAL_JUMP)  ; LAB_004bb0c7
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004bb09f
    JMP 0x004bada7                      ; 004bb0a9
        ;   XREF to: 004bada7 (UNCONDITIONAL_JUMP)  ; LAB_004bada7
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 004bb0ae
        ;   Label: LAB_004bb0ae
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004bb0b8
    JMP 0x004bada7                      ; 004bb0c2
        ;   XREF to: 004bada7 (UNCONDITIONAL_JUMP)  ; LAB_004bada7
    CMP EAX,0x2                         ; 004bb0c7
        ;   Label: LAB_004bb0c7
    JZ 0x004bb0ae                       ; 004bb0ca
        ;   XREF to: 004bb0ae (CONDITIONAL_JUMP)  ; LAB_004bb0ae
    JMP 0x004bada7                      ; 004bb0cc
        ;   XREF to: 004bada7 (UNCONDITIONAL_JUMP)  ; LAB_004bada7
    XOR EAX,EAX                         ; 004bb0d1
        ;   Label: LAB_004bb0d1
    MOV dword ptr [ESP + 0x98],EAX      ; 004bb0d3
    TEST ESI,ESI                        ; 004bb0da
    JNZ 0x004bb24f                      ; 004bb0dc
        ;   XREF to: 004bb24f (CONDITIONAL_JUMP)  ; LAB_004bb24f
    MOV EAX,[0x01cae0e8]                ; 004bb0e2 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004bb0e7
    PUSH EAX                            ; 004bb0ee
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bb0ef
    CALL dword ptr [EDX + 0xbc]         ; 004bb0f5
    ADD ESP,0x4                         ; 004bb0fb
    MOV dword ptr [ESP + 0x98],EAX      ; 004bb0fe
    MOV EAX,[0x01cae0e8]                ; 004bb105 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004bb10a
    PUSH EAX                            ; 004bb111
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004bb112
    CALL dword ptr [EDX + 0x140]        ; 004bb118
    ADD ESP,0x4                         ; 004bb11e
    TEST EAX,EAX                        ; 004bb121
    JZ 0x004bb22e                       ; 004bb123
        ;   XREF to: 004bb22e (CONDITIONAL_JUMP)  ; LAB_004bb22e
    CMP dword ptr [ESP + 0x98],0x0      ; 004bb129
        ;   Label: LAB_004bb129
    JNZ 0x004bb146                      ; 004bb131
        ;   XREF to: 004bb146 (CONDITIONAL_JUMP)  ; LAB_004bb146
    LEA EAX,[EDI + 0x20]                ; 004bb133
    PUSH EAX                            ; 004bb136
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 004bb137
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_004f1e00(CLocation * location)
    ADD ESP,0x4                         ; 004bb13c
    MOV dword ptr [ESP + 0x98],EAX      ; 004bb13f
    MOV ECX,dword ptr [EBX + 0x6c]      ; 004bb146
        ;   Label: LAB_004bb146
    PUSH ECX                            ; 004bb149
    LEA EAX,[ESP + 0x74]                ; 004bb14a
    PUSH EAX                            ; 004bb14e
    LEA EAX,[EBX + 0x20]                ; 004bb14f
    PUSH EAX                            ; 004bb152
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004bb153
    PUSH EAX                            ; 004bb15a
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 004bb15b
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004bb160
    TEST EAX,EAX                        ; 004bb163
    JZ 0x004bae75                       ; 004bb165
        ;   XREF to: 004bae75 (CONDITIONAL_JUMP)  ; LAB_004bae75
    FLD float ptr [ESP + 0x74]          ; 004bb16b
    FSUB float ptr [EBX + 0x34]         ; 004bb16f
    SUB ESP,0x4                         ; 004bb172
    FSTP float ptr [ESP]                ; 004bb175
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004bb178
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004bb17d
    FLD float ptr [ESP + 0xa8]          ; 004bb184
    FMUL double ptr [0x0058620a]        ; 004bb18b | DOUBLE_0058620a
    ADD ESP,0x4                         ; 004bb191
    FMUL double ptr [0x00586212]        ; 004bb194 | DOUBLE_00586212
    FLD float ptr [ESP + 0x9c]          ; 004bb19a
    FCHS                                ; 004bb1a1
    FSTP float ptr [ESP + 0x80]         ; 004bb1a3
    FST float ptr [EBX + 0xbcb8]        ; 004bb1aa
    FCOMP float ptr [ESP + 0x80]        ; 004bb1b0
    FNSTSW AX                           ; 004bb1b7
    SAHF                                ; 004bb1b9
    JC 0x004bb25a                       ; 004bb1ba
        ;   XREF to: 004bb25a (CONDITIONAL_JUMP)  ; LAB_004bb25a
    FLD float ptr [EBX + 0xbcb8]        ; 004bb1c0
        ;   Label: LAB_004bb1c0
    FCOMP float ptr [ESP + 0x9c]        ; 004bb1c6
    FNSTSW AX                           ; 004bb1cd
    SAHF                                ; 004bb1cf
    JBE 0x004bb1df                      ; 004bb1d0
        ;   XREF to: 004bb1df (CONDITIONAL_JUMP)  ; LAB_004bb1df
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004bb1d2
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004bb1d9
    FLD float ptr [ESP + 0x24]          ; 004bb1df
        ;   Label: LAB_004bb1df
    FCOMP double ptr [0x0058621a]       ; 004bb1e3 | DOUBLE_0058621a
    FNSTSW AX                           ; 004bb1e9
    SAHF                                ; 004bb1eb
    JNC 0x004bb26c                      ; 004bb1ec
        ;   XREF to: 004bb26c (CONDITIONAL_JUMP)  ; LAB_004bb26c
    CMP ESI,0x1                         ; 004bb1f2
    JZ 0x004bb26c                       ; 004bb1f5
        ;   XREF to: 004bb26c (CONDITIONAL_JUMP)  ; LAB_004bb26c
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004bb1f7
    JMP 0x004bae75                      ; 004bb201
        ;   XREF to: 004bae75 (UNCONDITIONAL_JUMP)  ; LAB_004bae75
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004bb206
        ;   Label: LAB_004bb206
    JMP 0x004bb129                      ; 004bb210
        ;   XREF to: 004bb129 (UNCONDITIONAL_JUMP)  ; LAB_004bb129
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 004bb215
        ;   Label: LAB_004bb215
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004bb21f
    JMP 0x004bb129                      ; 004bb229
        ;   XREF to: 004bb129 (UNCONDITIONAL_JUMP)  ; LAB_004bb129
    PUSH dword ptr [EBP + 0x18]         ; 004bb22e
        ;   Label: LAB_004bb22e
    PUSH EBX                            ; 004bb231
    CALL core_charactr.cpp_FUN_0042af70 ; 004bb232
        ;   XREF to: 0042af70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042af70()
    ADD ESP,0x8                         ; 004bb237
    CMP EAX,0x1                         ; 004bb23a
    JC 0x004bb129                       ; 004bb23d
        ;   XREF to: 004bb129 (CONDITIONAL_JUMP)  ; LAB_004bb129
    JBE 0x004bb206                      ; 004bb243
        ;   XREF to: 004bb206 (CONDITIONAL_JUMP)  ; LAB_004bb206
    CMP EAX,0x2                         ; 004bb245
    JZ 0x004bb215                       ; 004bb248
        ;   XREF to: 004bb215 (CONDITIONAL_JUMP)  ; LAB_004bb215
    JMP 0x004bb129                      ; 004bb24a
        ;   XREF to: 004bb129 (UNCONDITIONAL_JUMP)  ; LAB_004bb129
    MOV dword ptr [EBX + 0x2dbc],EAX    ; 004bb24f
        ;   Label: LAB_004bb24f
    JMP 0x004bb129                      ; 004bb255
        ;   XREF to: 004bb129 (UNCONDITIONAL_JUMP)  ; LAB_004bb129
    MOV EAX,dword ptr [ESP + 0x80]      ; 004bb25a
        ;   Label: LAB_004bb25a
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004bb261
    JMP 0x004bb1c0                      ; 004bb267
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_JUMP)  ; LAB_004bb1c0
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 004bb26c
        ;   Label: LAB_004bb26c
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004bb276
    JMP 0x004bae75                      ; 004bb280
        ;   XREF to: 004bae75 (UNCONDITIONAL_JUMP)  ; LAB_004bae75
    JBE 0x004baea5                      ; 004bb285
        ;   XREF to: 004baea5 (CONDITIONAL_JUMP)  ; LAB_004baea5
        ;   Label: LAB_004bb285
    FLD float ptr [ESP + 0x9c]          ; 004bb28b
    MOV dword ptr [EBX + 0x2410],0x0    ; 004bb292
    FCHS                                ; 004bb29c
    FSTP float ptr [EBX + 0xbcb8]       ; 004bb29e
    JMP 0x004baea5                      ; 004bb2a4
        ;   XREF to: 004baea5 (UNCONDITIONAL_JUMP)  ; LAB_004baea5


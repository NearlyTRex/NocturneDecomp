; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_waypoint_cpp_FUN_005abb80(undefined4 param_1,int param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_charactr.cpp_FUN_004354a0 at 004354b4
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004ee4a8
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.waypoint_count
;   undefined4 DAT_02c97384
;
; Called Functions:
;   core_waypoint.cpp_FUN_005ab880
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abb80
        ;   Label: core_waypoint.cpp_FUN_005abb80
    PUSH EBP                            ; 005abb81
    SUB ESP,0x10                        ; 005abb82
    MOV EBX,dword ptr [ESP + 0x20]      ; 005abb85
    TEST EBX,EBX                        ; 005abb89
    JNZ 0x005abb95                      ; 005abb8b
        ;   XREF to: 005abb95 (CONDITIONAL_JUMP)  ; LAB_005abb95
    XOR EAX,EAX                         ; 005abb8d
    ADD ESP,0x10                        ; 005abb8f
        ;   Label: LAB_005abb8f
    POP EBP                             ; 005abb92
    POP EBX                             ; 005abb93
    RET                                 ; 005abb94
    MOV EDX,dword ptr [ESP + 0x24]      ; 005abb95
        ;   Label: LAB_005abb95
    PUSH EDX                            ; 005abb99
    PUSH 0x0                            ; 005abb9a
    LEA EAX,[EBX + 0x20]                ; 005abb9c
    PUSH EAX                            ; 005abb9f
    MOV ECX,dword ptr [ESP + 0x28]      ; 005abba0
    PUSH ECX                            ; 005abba4
    CALL core_waypoint.cpp_FUN_005ab880 ; 005abba5
        ;   XREF to: 005ab880 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_005ab880()
    ADD ESP,0x10                        ; 005abbaa
    TEST EAX,EAX                        ; 005abbad
    JNZ 0x005abbe3                      ; 005abbaf
        ;   XREF to: 005abbe3 (CONDITIONAL_JUMP)  ; LAB_005abbe3
    CMP dword ptr [EBX + 0x374],0x1     ; 005abbb1
    JL 0x005abb8f                       ; 005abbb8
        ;   XREF to: 005abb8f (CONDITIONAL_JUMP)  ; LAB_005abb8f
    PUSH EDI                            ; 005abbba
    PUSH ESI                            ; 005abbbb
    XOR ESI,ESI                         ; 005abbbc
    MOV EDX,dword ptr [0x00622c18]      ; 005abbbe | g_CDemonSetPtr
        ;   Label: LAB_005abbbe
    CMP ESI,dword ptr [EDX + 0x154e74]  ; 005abbc4 | g_CDemonSetInstance.waypoint_count
    JGE 0x005abbeb                      ; 005abbca
        ;   XREF to: 005abbeb (CONDITIONAL_JUMP)  ; LAB_005abbeb
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x154e78] ; 005abbcc
    ADD EAX,0x4                         ; 005abbd3
    INC ESI                             ; 005abbd6
    MOV dword ptr [EDX + 0x558],0x7149f2ca ; 005abbd7
    JMP 0x005abbbe                      ; 005abbe1
        ;   XREF to: 005abbbe (UNCONDITIONAL_JUMP)  ; LAB_005abbbe
    MOV EAX,EBX                         ; 005abbe3
        ;   Label: LAB_005abbe3
    ADD ESP,0x10                        ; 005abbe5
    POP EBP                             ; 005abbe8
    POP EBX                             ; 005abbe9
    RET                                 ; 005abbea
    MOV ESI,0x1                         ; 005abbeb
        ;   Label: LAB_005abbeb
    MOV dword ptr [0x02c97384],EBX      ; 005abbf0 | DAT_02c97384
    MOV dword ptr [EBX + 0x558],0x0     ; 005abbf6
    DEC ESI                             ; 005abc00
        ;   Label: LAB_005abc00
    LEA EBX,[ESI*0x4 + 0x0]             ; 005abc01
    PUSH EBX                            ; 005abc08
    PUSH 0x2c97388                      ; 005abc09
    MOV EAX,[0x02c97384]                ; 005abc0e | DAT_02c97384
    PUSH 0x2c97384                      ; 005abc13 | DAT_02c97384
    MOV dword ptr [ESP + 0x18],EAX      ; 005abc18
    CALL crt_string.c_memmove_FUN_005c25d0 ; 005abc1c
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005abc21
    MOV EAX,dword ptr [ESP + 0xc]       ; 005abc24
    XOR EBP,EBP                         ; 005abc28
    MOV EDX,dword ptr [EAX + 0x374]     ; 005abc2a
    MOV dword ptr [ESP + 0x14],EBP      ; 005abc30
    TEST EDX,EDX                        ; 005abc34
    JLE 0x005abcae                      ; 005abc36
        ;   XREF to: 005abcae (CONDITIONAL_JUMP)  ; LAB_005abcae
    MOV EBP,EBX                         ; 005abc3c
    MOV EDI,EAX                         ; 005abc3e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005abc40
        ;   Label: LAB_005abc40
    FLD float ptr [EAX + 0x558]         ; 005abc44
    FADD float ptr [EDI + 0x37c]        ; 005abc4a
    MOV ECX,dword ptr [EDI + 0x378]     ; 005abc50
    FST float ptr [ESP + 0x10]          ; 005abc56
    FCOMP float ptr [ECX + 0x558]       ; 005abc5a
    FNSTSW AX                           ; 005abc60
    SAHF                                ; 005abc62
    JNC 0x005abc94                      ; 005abc63
        ;   XREF to: 005abc94 (CONDITIONAL_JUMP)  ; LAB_005abc94
    MOV EAX,dword ptr [ESP + 0x10]      ; 005abc65
    XOR EDX,EDX                         ; 005abc69
    MOV dword ptr [ECX + 0x558],EAX     ; 005abc6b
    TEST ESI,ESI                        ; 005abc71
    JLE 0x005abc86                      ; 005abc73
        ;   XREF to: 005abc86 (CONDITIONAL_JUMP)  ; LAB_005abc86
    LEA EBX,[ESI*0x4 + 0x0]             ; 005abc75
    XOR EAX,EAX                         ; 005abc7c
    CMP ECX,dword ptr [EAX + 0x2c97384] ; 005abc7e | DAT_02c97384
        ;   Label: LAB_005abc7e
    JNZ 0x005abcee                      ; 005abc84
        ;   XREF to: 005abcee (CONDITIONAL_JUMP)  ; LAB_005abcee
    CMP EDX,ESI                         ; 005abc86
        ;   Label: LAB_005abc86
    JNZ 0x005abc94                      ; 005abc88
        ;   XREF to: 005abc94 (CONDITIONAL_JUMP)  ; LAB_005abc94
    ADD EBP,0x4                         ; 005abc8a
    INC ESI                             ; 005abc8d
    MOV dword ptr [EBP + 0x2c97380],ECX ; 005abc8e | DAT_02c97384
    MOV ECX,dword ptr [ESP + 0x14]      ; 005abc94
        ;   Label: LAB_005abc94
    MOV EDX,dword ptr [ESP + 0xc]       ; 005abc98
    ADD EDI,0x8                         ; 005abc9c
    INC ECX                             ; 005abc9f
    MOV EBX,dword ptr [EDX + 0x374]     ; 005abca0
    MOV dword ptr [ESP + 0x14],ECX      ; 005abca6
    CMP ECX,EBX                         ; 005abcaa
    JL 0x005abc40                       ; 005abcac
        ;   XREF to: 005abc40 (CONDITIONAL_JUMP)  ; LAB_005abc40
    TEST ESI,ESI                        ; 005abcae
        ;   Label: LAB_005abcae
    JG 0x005abc00                       ; 005abcb0
        ;   XREF to: 005abc00 (CONDITIONAL_JUMP)  ; LAB_005abc00
    MOV ESI,0x6fa18f08                  ; 005abcb6
    XOR EBP,EBP                         ; 005abcbb
    XOR EDI,EDI                         ; 005abcbd
    MOV dword ptr [ESP + 0x8],ESI       ; 005abcbf
    XOR ESI,ESI                         ; 005abcc3
    MOV EAX,[0x00622c18]                ; 005abcc5 | g_CDemonSetPtr
        ;   Label: LAB_005abcc5
    CMP EDI,dword ptr [EAX + 0x154e74]  ; 005abcca | g_CDemonSetInstance.waypoint_count
    JGE 0x005abd22                      ; 005abcd0
        ;   XREF to: 005abd22 (CONDITIONAL_JUMP)  ; LAB_005abd22
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x154e78] ; 005abcd2
    FLD float ptr [EBX + 0x558]         ; 005abcd9
    FCOMP float ptr [ESP + 0x8]         ; 005abcdf
    FNSTSW AX                           ; 005abce3
    SAHF                                ; 005abce5
    JC 0x005abcf8                       ; 005abce6
        ;   XREF to: 005abcf8 (CONDITIONAL_JUMP)  ; LAB_005abcf8
    INC EDI                             ; 005abce8
        ;   Label: LAB_005abce8
    ADD ESI,0x4                         ; 005abce9
    JMP 0x005abcc5                      ; 005abcec
        ;   XREF to: 005abcc5 (UNCONDITIONAL_JUMP)  ; LAB_005abcc5
    ADD EAX,0x4                         ; 005abcee
        ;   Label: LAB_005abcee
    INC EDX                             ; 005abcf1
    CMP EAX,EBX                         ; 005abcf2
    JL 0x005abc7e                       ; 005abcf4
        ;   XREF to: 005abc7e (CONDITIONAL_JUMP)  ; LAB_005abc7e
    JMP 0x005abc86                      ; 005abcf6
        ;   XREF to: 005abc86 (UNCONDITIONAL_JUMP)  ; LAB_005abc86
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005abcf8
        ;   Label: LAB_005abcf8
    PUSH ECX                            ; 005abcfc
    PUSH 0x0                            ; 005abcfd
    LEA EAX,[EBX + 0x20]                ; 005abcff
    PUSH EAX                            ; 005abd02
    MOV EAX,dword ptr [ESP + 0x30]      ; 005abd03
    PUSH EAX                            ; 005abd07
    CALL core_waypoint.cpp_FUN_005ab880 ; 005abd08
        ;   XREF to: 005ab880 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_005ab880()
    ADD ESP,0x10                        ; 005abd0d
    TEST EAX,EAX                        ; 005abd10
    JZ 0x005abce8                       ; 005abd12
        ;   XREF to: 005abce8 (CONDITIONAL_JUMP)  ; LAB_005abce8
    MOV EAX,dword ptr [EBX + 0x558]     ; 005abd14
    MOV EBP,EBX                         ; 005abd1a
    MOV dword ptr [ESP + 0x8],EAX       ; 005abd1c
    JMP 0x005abce8                      ; 005abd20
        ;   XREF to: 005abce8 (UNCONDITIONAL_JUMP)  ; LAB_005abce8
    MOV EAX,EBP                         ; 005abd22
        ;   Label: LAB_005abd22
    POP ESI                             ; 005abd24
    POP EDI                             ; 005abd25
    ADD ESP,0x10                        ; 005abd26
    POP EBP                             ; 005abd29
    POP EBX                             ; 005abd2a
    RET                                 ; 005abd2b


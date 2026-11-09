; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_scat_cpp_FUN_0051fa90(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0051fa60 = 0051fae6
;   undefined4 DAT_005e2b8b
;
; Called Functions:
;   core_charactr.cpp_FUN_004254b0
;   core_charactr.cpp_FUN_0042a5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051fa90
        ;   Label: core_scat.cpp_FUN_0051fa90
    SUB ESP,0x4                         ; 0051fa91
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051fa94
    PUSH EBX                            ; 0051fa98
    CALL core_charactr.cpp_FUN_004254b0 ; 0051fa99
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 0051fa9e
    TEST EAX,EAX                        ; 0051faa1
    JZ 0x0051fab6                       ; 0051faa3
        ;   XREF to: 0051fab6 (CONDITIONAL_JUMP)  ; LAB_0051fab6
    PUSH ESI                            ; 0051faa5
    MOV EDX,dword ptr [EBX + 0x25654]   ; 0051faa6
    TEST EDX,EDX                        ; 0051faac
    JNZ 0x0051fabb                      ; 0051faae
        ;   XREF to: 0051fabb (CONDITIONAL_JUMP)  ; LAB_0051fabb
    MOV EAX,0x1                         ; 0051fab0
    POP ESI                             ; 0051fab5
    ADD ESP,0x4                         ; 0051fab6
        ;   Label: LAB_0051fab6
    POP EBX                             ; 0051fab9
    RET                                 ; 0051faba
    PUSH EDX                            ; 0051fabb
        ;   Label: LAB_0051fabb
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 0051fabc
    CALL dword ptr [ESI + 0x18]         ; 0051fac2
    ADD ESP,0x4                         ; 0051fac5
    MOV EAX,dword ptr [EBX + 0x25654]   ; 0051fac8
    XOR ESI,ESI                         ; 0051face
    TEST EAX,EAX                        ; 0051fad0
    JZ 0x0051faeb                       ; 0051fad2
        ;   XREF to: 0051faeb (CONDITIONAL_JUMP)  ; LAB_0051faeb
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0051fad4
    CMP EAX,0x9                         ; 0051fada
    JA 0x0051fae6                       ; 0051fadd
        ;   XREF to: 0051fae6 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x51fa60]  ; 0051fadf | caseD_8 | caseD_9 | switchdataD_0051fa60
        ;   Label: switchD
    MOV EAX,0x2                         ; 0051fae6
        ;   Label: caseD_0
    PUSH EAX                            ; 0051faeb
        ;   Label: LAB_0051faeb
    PUSH EBX                            ; 0051faec
    CALL core_charactr.cpp_FUN_0042a5a0 ; 0051faed
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0051faf2
    FLD float ptr [ESP + 0xc]           ; 0051faf6
    ADD ESP,0x8                         ; 0051fafa
    FCOMP double ptr [0x005e2b8b]       ; 0051fafd | DAT_005e2b8b
    FNSTSW AX                           ; 0051fb03
    SAHF                                ; 0051fb05
    JBE 0x0051fb2d                      ; 0051fb06
        ;   XREF to: 0051fb2d (CONDITIONAL_JUMP)  ; LAB_0051fb2d
    MOV EAX,dword ptr [EBX + 0x25654]   ; 0051fb08
        ;   Label: LAB_0051fb08
    PUSH EAX                            ; 0051fb0e
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 0051fb0f
    CALL dword ptr [EBX + 0xf8]         ; 0051fb15
    ADD ESP,0x4                         ; 0051fb1b
    MOV EAX,0x1                         ; 0051fb1e
    POP ESI                             ; 0051fb23
    ADD ESP,0x4                         ; 0051fb24
    POP EBX                             ; 0051fb27
    RET                                 ; 0051fb28
    XOR EAX,EAX                         ; 0051fb29
        ;   Label: caseD_9
    JMP 0x0051faeb                      ; 0051fb2b
        ;   XREF to: 0051faeb (UNCONDITIONAL_JUMP)  ; LAB_0051faeb
    TEST ESI,ESI                        ; 0051fb2d
        ;   Label: LAB_0051fb2d
    JNZ 0x0051fb08                      ; 0051fb2f
        ;   XREF to: 0051fb08 (CONDITIONAL_JUMP)  ; LAB_0051fb08
    MOV EAX,0x1                         ; 0051fb31
    POP ESI                             ; 0051fb36
    ADD ESP,0x4                         ; 0051fb37
    POP EBX                             ; 0051fb3a
    RET                                 ; 0051fb3b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005268e0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052b546
;
; Called Functions:
;   FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005268e0
        ;   Label: FUN_005268e0
    PUSH ESI                            ; 005268e1
    PUSH EDI                            ; 005268e2
    PUSH EBP                            ; 005268e3
    SUB ESP,0x10                        ; 005268e4
    MOV EAX,dword ptr [ESP + 0x30]      ; 005268e7
    MOV EBP,dword ptr [EAX + 0x10]      ; 005268eb
    MOV EAX,dword ptr [EAX + 0x14]      ; 005268ee
    MOV dword ptr [ESP],EAX             ; 005268f1
    TEST EAX,EAX                        ; 005268f4
    JLE 0x0052694f                      ; 005268f6
        ;   XREF to: 0052694f (CONDITIONAL_JUMP)  ; LAB_0052694f
    SHL EAX,0x2                         ; 005268f8
    XOR EDI,EDI                         ; 005268fb
    MOV dword ptr [ESP + 0x4],EAX       ; 005268fd
    MOV dword ptr [ESP + 0xc],EDI       ; 00526901
    XOR EDI,EDI                         ; 00526905
        ;   Label: LAB_00526905
    TEST EBP,EBP                        ; 00526907
    JLE 0x0052693c                      ; 00526909
        ;   XREF to: 0052693c (CONDITIONAL_JUMP)  ; LAB_0052693c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052690b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052690f
    MOV EBX,dword ptr [ESP + 0xc]       ; 00526913
    MOV EAX,dword ptr [ESP + 0x28]      ; 00526917
    ADD ESI,EDX                         ; 0052691b
    ADD EBX,EAX                         ; 0052691d
    MOV EAX,dword ptr [ESI]             ; 0052691f
        ;   Label: LAB_0052691f
    TEST EAX,EAX                        ; 00526921
    JNZ 0x005269ad                      ; 00526923
        ;   XREF to: 005269ad (CONDITIONAL_JUMP)  ; LAB_005269ad
    MOV dword ptr [EBX],EAX             ; 00526929
        ;   Label: LAB_00526929
    ADD EBX,0x180                       ; 0052692b
    INC EDI                             ; 00526931
    ADD ESI,0x80                        ; 00526932
    CMP EDI,EBP                         ; 00526938
    JL 0x0052691f                       ; 0052693a
        ;   XREF to: 0052691f (CONDITIONAL_JUMP)  ; LAB_0052691f
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052693c
        ;   Label: LAB_0052693c
    ADD ECX,0x4                         ; 00526940
    MOV EBX,dword ptr [ESP + 0x4]       ; 00526943
    MOV dword ptr [ESP + 0xc],ECX       ; 00526947
    CMP ECX,EBX                         ; 0052694b
    JL 0x00526905                       ; 0052694d
        ;   XREF to: 00526905 (CONDITIONAL_JUMP)  ; LAB_00526905
    MOV ESI,dword ptr [ESP]             ; 0052694f
        ;   Label: LAB_0052694f
    CMP ESI,0x20                        ; 00526952
    JGE 0x005269a5                      ; 00526955
        ;   XREF to: 005269a5 (CONDITIONAL_JUMP)  ; LAB_005269a5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00526957
    LEA EDI,[ESI*0x4 + 0x0]             ; 0052695b
    ADD EAX,EDI                         ; 00526962
    MOV dword ptr [ESP + 0x8],EAX       ; 00526964
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526968
        ;   Label: LAB_00526968
    MOV EAX,dword ptr [EAX]             ; 0052696c
    TEST EAX,EAX                        ; 0052696e
    JNZ 0x005269c1                      ; 00526970
        ;   XREF to: 005269c1 (CONDITIONAL_JUMP)  ; LAB_005269c1
    XOR EBX,EBX                         ; 00526972
        ;   Label: LAB_00526972
    TEST EBP,EBP                        ; 00526974
    JLE 0x0052698f                      ; 00526976
        ;   XREF to: 0052698f (CONDITIONAL_JUMP)  ; LAB_0052698f
    MOV ESI,dword ptr [ESP + 0x28]      ; 00526978
    ADD ESI,EDI                         ; 0052697c
    ADD ESI,0x180                       ; 0052697e
        ;   Label: LAB_0052697e
    INC EBX                             ; 00526984
    MOV dword ptr [ESI + 0xfffffe80],EAX ; 00526985
    CMP EBX,EBP                         ; 0052698b
    JL 0x0052697e                       ; 0052698d
        ;   XREF to: 0052697e (CONDITIONAL_JUMP)  ; LAB_0052697e
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052698f
        ;   Label: LAB_0052698f
    ADD EBX,0x4                         ; 00526993
    ADD EDI,0x4                         ; 00526996
    MOV dword ptr [ESP + 0x8],EBX       ; 00526999
    CMP EDI,0x80                        ; 0052699d
    JL 0x00526968                       ; 005269a3
        ;   XREF to: 00526968 (CONDITIONAL_JUMP)  ; LAB_00526968
    ADD ESP,0x10                        ; 005269a5
        ;   Label: LAB_005269a5
    POP EBP                             ; 005269a8
    POP EDI                             ; 005269a9
    POP ESI                             ; 005269aa
    POP EBX                             ; 005269ab
    RET                                 ; 005269ac
    INC EAX                             ; 005269ad
        ;   Label: LAB_005269ad
    PUSH EAX                            ; 005269ae
    MOV ECX,dword ptr [ESP + 0x28]      ; 005269af
    PUSH ECX                            ; 005269b3
    CALL FUN_00525cd0                   ; 005269b4
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 005269b9
    JMP 0x00526929                      ; 005269bc
        ;   XREF to: 00526929 (UNCONDITIONAL_JUMP)  ; LAB_00526929
    INC EAX                             ; 005269c1
        ;   Label: LAB_005269c1
    PUSH EAX                            ; 005269c2
    MOV ESI,dword ptr [ESP + 0x28]      ; 005269c3
    PUSH ESI                            ; 005269c7
    CALL FUN_00525cd0                   ; 005269c8
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 005269cd
    JMP 0x00526972                      ; 005269d0
        ;   XREF to: 00526972 (UNCONDITIONAL_JUMP)  ; LAB_00526972


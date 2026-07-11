; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00526ff0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0048b270 at 0048b304
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   FUN_005234b0
;   FUN_00524830
;   FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526ff0
        ;   Label: FUN_00526ff0
    PUSH 0x1                            ; 00526ff1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526ff3
    PUSH EDX                            ; 00526ff7
    CALL FUN_005234b0                   ; 00526ff8
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005234b0()
    MOV EBX,EAX                         ; 00526ffd
    ADD ESP,0x8                         ; 00526fff
    TEST EAX,EAX                        ; 00527002
    JNZ 0x00527008                      ; 00527004
        ;   XREF to: 00527008 (CONDITIONAL_JUMP)  ; LAB_00527008
    POP EBX                             ; 00527006
    RET                                 ; 00527007
    PUSH EDI                            ; 00527008
        ;   Label: LAB_00527008
    PUSH ESI                            ; 00527009
    PUSH 0x0                            ; 0052700a
    MOV dword ptr [EAX + 0x40],0x1      ; 0052700c
    PUSH EBX                            ; 00527013
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00527014
    MOV ESI,0x1                         ; 00527018
    MOV dword ptr [EBX + 0x3c],EAX      ; 0052701d
    CALL FUN_00524830                   ; 00527020
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; undefined FUN_00524830()
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00527025
    ADD ESP,0x8                         ; 00527028
    TEST ECX,ECX                        ; 0052702b
    JZ 0x00527047                       ; 0052702d
        ;   XREF to: 00527047 (CONDITIONAL_JUMP)  ; LAB_00527047
    MOV EDI,dword ptr [0x02dc8318]      ; 0052702f | DAT_02dc8318
    TEST EDI,EDI                        ; 00527035
    JZ 0x00527047                       ; 00527037
        ;   XREF to: 00527047 (CONDITIONAL_JUMP)  ; LAB_00527047
    PUSH 0x4                            ; 00527039
    PUSH EBX                            ; 0052703b
    MOV ESI,dword ptr [EDI]             ; 0052703c
    PUSH EDI                            ; 0052703e
    CALL dword ptr [ESI + 0x40]         ; 0052703f
    ADD ESP,0xc                         ; 00527042
    MOV ESI,EAX                         ; 00527045
    CALL FUN_00528890                   ; 00527047
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined FUN_00528890()
        ;   Label: LAB_00527047
    MOV EAX,ESI                         ; 0052704c
    POP ESI                             ; 0052704e
    POP EDI                             ; 0052704f
    POP EBX                             ; 00527050
    RET                                 ; 00527051


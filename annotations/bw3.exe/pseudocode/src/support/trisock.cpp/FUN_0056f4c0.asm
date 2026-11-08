; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f4c0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004bf2e0 at 004bf326
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_0056f5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f4c0
        ;   Label: FUN_0056f4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f4c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056f4c5
    PUSH EDX                            ; 0056f4c9
    PUSH EBX                            ; 0056f4ca
    CALL FUN_0056f5c0                   ; 0056f4cb
        ;   XREF to: 0056f5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f5c0()
    ADD ESP,0x8                         ; 0056f4d0
    TEST EAX,EAX                        ; 0056f4d3
    JZ 0x0056f4db                       ; 0056f4d5
        ;   XREF to: 0056f4db (CONDITIONAL_JUMP)  ; LAB_0056f4db
    MOV EAX,EBX                         ; 0056f4d7
    POP EBX                             ; 0056f4d9
    RET                                 ; 0056f4da
    PUSH EDI                            ; 0056f4db
        ;   Label: LAB_0056f4db
    PUSH ESI                            ; 0056f4dc
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056f4dd
    PUSH EDI                            ; 0056f4e1
    MOV ECX,0x5d6813                    ; 0056f4e2
    MOV ESI,0x57                        ; 0056f4e7
    PUSH 0x5d682a                       ; 0056f4ec
    MOV dword ptr [0x01d71de0],ECX      ; 0056f4f1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0056f4f7 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0056f4fd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0056f502
    POP ESI                             ; 0056f505
    POP EDI                             ; 0056f506
    MOV EAX,EBX                         ; 0056f507
    POP EBX                             ; 0056f509
    RET                                 ; 0056f50a


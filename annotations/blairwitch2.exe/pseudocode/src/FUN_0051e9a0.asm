; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051e9a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042a330
;   FUN_004ce240
;   FUN_0051ec20
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e9a0
        ;   Label: FUN_0051e9a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051e9a1
    PUSH EDX                            ; 0051e9a5
    CALL FUN_004ce240                   ; 0051e9a6
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce240()
    ADD ESP,0x4                         ; 0051e9ab
    MOV EBX,EAX                         ; 0051e9ae
    ADD EAX,0x2b4                       ; 0051e9b0
    PUSH 0x5e29b7                       ; 0051e9b5
    MOV dword ptr [EAX + -0x4],0x5fae34 ; 0051e9ba
    PUSH EAX                            ; 0051e9c1
    MOV dword ptr [EAX + 0x2538c],0x0   ; 0051e9c2
    CALL FUN_005478b0                   ; 0051e9cc
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    LEA EAX,[EBX + 0x25644]             ; 0051e9d1
    MOV dword ptr [EBX + 0x25650],0x3f800000 ; 0051e9d7
    ADD ESP,0x8                         ; 0051e9e1
    MOV dword ptr [EAX + 0x8],0x0       ; 0051e9e4
    PUSH EBX                            ; 0051e9eb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051e9ec
    MOV dword ptr [EAX + 0x4],EDX       ; 0051e9ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051e9f2
    MOV dword ptr [EAX],EDX             ; 0051e9f5
    CALL FUN_0051ec20                   ; 0051e9f7
        ;   XREF to: 0051ec20 (UNCONDITIONAL_CALL)  ; undefined FUN_0051ec20()
    ADD ESP,0x4                         ; 0051e9fc
    MOV dword ptr [EBX + 0x25654],0x0   ; 0051e9ff
    PUSH 0x0                            ; 0051ea09
    MOV dword ptr [EBX + 0x2565c],0x0   ; 0051ea0b
    PUSH 0x5e29c0                       ; 0051ea15
    MOV dword ptr [EBX + 0x25664],0x0   ; 0051ea1a
    PUSH 0x1                            ; 0051ea24
    MOV dword ptr [EBX + 0x25668],0x0   ; 0051ea26
    PUSH 0x0                            ; 0051ea30
    FLD float ptr [EBX + 0x2565c]       ; 0051ea32
    PUSH EBX                            ; 0051ea38
    FSTP float ptr [EBX + 0x25658]      ; 0051ea39
    CALL FUN_0042a330                   ; 0051ea3f
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 0051ea44
    PUSH 0x0                            ; 0051ea47
    PUSH 0x5e29d6                       ; 0051ea49
    PUSH 0x2                            ; 0051ea4e
    PUSH 0x1                            ; 0051ea50
    PUSH EBX                            ; 0051ea52
    CALL FUN_0042a330                   ; 0051ea53
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a330()
    ADD ESP,0x14                        ; 0051ea58
    MOV EAX,EBX                         ; 0051ea5b
    POP EBX                             ; 0051ea5d
    RET                                 ; 0051ea5e


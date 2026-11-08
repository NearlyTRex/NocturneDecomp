; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b8078(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005b8100 at 005b8118
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;
; Called Functions:
;   FUN_005bce04
;   FUN_005bd180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8078
        ;   Label: FUN_005b8078
    PUSH ESI                            ; 005b8079
    PUSH EDI                            ; 005b807a
    PUSH EBP                            ; 005b807b
    SUB ESP,0x14                        ; 005b807c
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b807f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b8083
    PUSH EDX                            ; 005b8086
    CALL dword ptr [0x0061f2a8]         ; 005b8087 | PTR_FUN_0061f2a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b808d
    MOV ECX,dword ptr [EAX + 0xc]       ; 005b8090
    ADD ESP,0x4                         ; 005b8093
    CMP ECX,0x1                         ; 005b8096
    JZ 0x005b80b7                       ; 005b8099
        ;   XREF to: 005b80b7 (CONDITIONAL_JUMP)  ; LAB_005b80b7
    TEST ECX,ECX                        ; 005b809b
    JZ 0x005b80b0                       ; 005b809d
        ;   XREF to: 005b80b0 (CONDITIONAL_JUMP)  ; LAB_005b80b0
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b809f
    PUSH EDI                            ; 005b80a2
    CALL dword ptr [0x0061f2ac]         ; 005b80a3 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b80a9
    XOR EAX,EAX                         ; 005b80ac
    JMP 0x005b80f5                      ; 005b80ae
        ;   XREF to: 005b80f5 (UNCONDITIONAL_JUMP)  ; LAB_005b80f5
    MOV dword ptr [EAX + 0xc],0x1       ; 005b80b0
        ;   Label: LAB_005b80b0
    MOV EDX,dword ptr [ESP + 0x30]      ; 005b80b7
        ;   Label: LAB_005b80b7
    MOV EAX,0x5b8060                    ; 005b80bb | LAB_005b8060
    PUSH EDX                            ; 005b80c0
    MOV ECX,dword ptr [ESP + 0x30]      ; 005b80c1
    MOV dword ptr [ESP + 0x8],EAX       ; 005b80c5 | LAB_005b8060
    PUSH ECX                            ; 005b80c9
    LEA EAX,[ESP + 0x8]                 ; 005b80ca
    MOV EBP,0x5b8040                    ; 005b80ce | LAB_005b8040
    PUSH EAX                            ; 005b80d3
    MOV dword ptr [ESP + 0x14],EBX      ; 005b80d4
    MOV dword ptr [ESP + 0xc],EBP       ; 005b80d8 | LAB_005b8040
    CALL FUN_005bd180                   ; 005b80dc
        ;   XREF to: 005bd180 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd180()
    ADD ESP,0xc                         ; 005b80e1
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b80e4
    PUSH EDI                            ; 005b80e7
    MOV ESI,EAX                         ; 005b80e8
    CALL dword ptr [0x0061f2ac]         ; 005b80ea | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b80f0
    MOV EAX,ESI                         ; 005b80f3
    ADD ESP,0x14                        ; 005b80f5
        ;   Label: LAB_005b80f5
    POP EBP                             ; 005b80f8
    POP EDI                             ; 005b80f9
    POP ESI                             ; 005b80fa
    POP EBX                             ; 005b80fb
    RET                                 ; 005b80fc


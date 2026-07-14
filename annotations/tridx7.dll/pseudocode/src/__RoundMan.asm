; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __RoundMan(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_1000a170 at 1000a1ae
;   __ld12cvt at 1000a005
;
; Called Functions:
;   __IncMan
;   __ZeroTail
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 10009db0
        ;   Label: __RoundMan
    MOV dword ptr [ESP + 0x4],0x0       ; 10009db3
    PUSH EBX                            ; 10009dbb
    PUSH ESI                            ; 10009dbc
    PUSH EDI                            ; 10009dbd
    PUSH EBP                            ; 10009dbe
    MOV EBP,dword ptr [ESP + 0x20]      ; 10009dbf
    LEA EDI,[EBP]                       ; 10009dc3
    DEC EBP                             ; 10009dc6
    MOV EAX,EDI                         ; 10009dc7
    CDQ                                 ; 10009dc9
    AND EDX,0x1f                        ; 10009dca
    MOV EBX,0x1f                        ; 10009dcd
    ADD EAX,EDX                         ; 10009dd2
    SAR EAX,0x5                         ; 10009dd4
    MOV ESI,EAX                         ; 10009dd7
    MOV EAX,EDI                         ; 10009dd9
    CDQ                                 ; 10009ddb
    XOR EAX,EDX                         ; 10009ddc
    SUB EAX,EDX                         ; 10009dde
    AND EAX,EBX                         ; 10009de0
    XOR EAX,EDX                         ; 10009de2
    SUB EAX,EDX                         ; 10009de4
    SUB EBX,EAX                         ; 10009de6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10009de8
    LEA ECX,[EAX + ESI*0x4]             ; 10009dec
    MOV EAX,0x1                         ; 10009def
    MOV dword ptr [ESP + 0x10],ECX      ; 10009df4
    MOV CL,BL                           ; 10009df8
    SHL EAX,CL                          ; 10009dfa
    MOV ECX,dword ptr [ESP + 0x10]      ; 10009dfc
    TEST dword ptr [ECX],EAX            ; 10009e00
    JZ 0x10009e29                       ; 10009e02
        ;   XREF to: 10009e29 (CONDITIONAL_JUMP)  ; LAB_10009e29
    INC EDI                             ; 10009e04
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10009e05
    PUSH EDI                            ; 10009e09
    PUSH EAX                            ; 10009e0a
    CALL __ZeroTail                     ; 10009e0b
        ;   XREF to: 10009cd0 (UNCONDITIONAL_CALL)  ; undefined __ZeroTail()
    ADD ESP,0x8                         ; 10009e10
    TEST EAX,EAX                        ; 10009e13
    JNZ 0x10009e29                      ; 10009e15
        ;   XREF to: 10009e29 (CONDITIONAL_JUMP)  ; LAB_10009e29
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10009e17
    PUSH EBP                            ; 10009e1b
    PUSH EAX                            ; 10009e1c
    CALL __IncMan                       ; 10009e1d
        ;   XREF to: 10009d40 (UNCONDITIONAL_CALL)  ; undefined __IncMan()
    MOV dword ptr [ESP + 0x1c],EAX      ; 10009e22
    ADD ESP,0x8                         ; 10009e26
    MOV EAX,0xffffffff                  ; 10009e29
        ;   Label: LAB_10009e29
    MOV CL,BL                           ; 10009e2e
    SHL EAX,CL                          ; 10009e30
    MOV ECX,dword ptr [ESP + 0x10]      ; 10009e32
    INC ESI                             ; 10009e36
    AND dword ptr [ECX],EAX             ; 10009e37
    CMP ESI,0x3                         ; 10009e39
    JGE 0x10009e50                      ; 10009e3c
        ;   XREF to: 10009e50 (CONDITIONAL_JUMP)  ; LAB_10009e50
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10009e3e
    MOV ECX,0x3                         ; 10009e42
    SUB ECX,ESI                         ; 10009e47
    LEA EDI,[EAX + ESI*0x4]             ; 10009e49
    XOR EAX,EAX                         ; 10009e4c
    STOSD.REP ES:EDI                    ; 10009e4e
    MOV EAX,dword ptr [ESP + 0x14]      ; 10009e50
        ;   Label: LAB_10009e50
    POP EBP                             ; 10009e54
    POP EDI                             ; 10009e55
    POP ESI                             ; 10009e56
    POP EBX                             ; 10009e57
    ADD ESP,0x8                         ; 10009e58
    RET                                 ; 10009e5b


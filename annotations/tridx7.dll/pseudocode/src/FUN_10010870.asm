; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort FUN_10010870(uint param_1,ushort param_2)
;
; Local Variables:
; undefined2       Stack[-0x2]:2  local_2
;
; XREF[3]:
;   FUN_1000fc30 at 1000fc46
;   FUN_100107d0 at 1001081d
;   FUN_100108f0 at 100108fa
;
; Referenced Globals:
;   void* PTR_DAT_10017484 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_10017760
;
; Called Functions:
;   FUN_1000be00
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10010870
        ;   Label: FUN_10010870
    CMP word ptr [ESP + 0x8],0xffff     ; 10010873
    JNZ 0x10010882                      ; 1001087a
        ;   XREF to: 10010882 (CONDITIONAL_JUMP)  ; LAB_10010882
    XOR EAX,EAX                         ; 1001087c
    ADD ESP,0x4                         ; 1001087e
    RET                                 ; 10010881
    CMP word ptr [ESP + 0x8],0x100      ; 10010882
        ;   Label: LAB_10010882
    JNC 0x100108a5                      ; 10010889
        ;   XREF to: 100108a5 (CONDITIONAL_JUMP)  ; LAB_100108a5
    MOV EAX,dword ptr [ESP + 0x8]       ; 1001088b
    MOV ECX,dword ptr [0x10017484]      ; 1001088f | PTR_DAT_10017484
    AND EAX,0xffff                      ; 10010895
    MOV AX,word ptr [ECX + EAX*0x2]     ; 1001089a | DAT_1001748a
    MOV word ptr [ESP + 0x2],AX         ; 1001089e
    JMP 0x100108cc                      ; 100108a3
        ;   XREF to: 100108cc (UNCONDITIONAL_JUMP)  ; LAB_100108cc
    CMP dword ptr [0x10017760],0x0      ; 100108a5 | DAT_10017760
        ;   Label: LAB_100108a5
    JZ 0x100108dd                       ; 100108ac
        ;   XREF to: 100108dd (CONDITIONAL_JUMP)  ; LAB_100108dd
    LEA EAX,[ESP + 0x2]                 ; 100108ae
    PUSH 0x0                            ; 100108b2
    LEA ECX,[ESP + 0xc]                 ; 100108b4
    PUSH 0x0                            ; 100108b8
    PUSH EAX                            ; 100108ba
    PUSH 0x1                            ; 100108bb
    PUSH ECX                            ; 100108bd
    PUSH 0x1                            ; 100108be
    CALL FUN_1000be00                   ; 100108c0
        ;   XREF to: 1000be00 (UNCONDITIONAL_CALL)  ; undefined FUN_1000be00()
    ADD ESP,0x18                        ; 100108c5
    TEST EAX,EAX                        ; 100108c8
    JZ 0x100108dd                       ; 100108ca
        ;   XREF to: 100108dd (CONDITIONAL_JUMP)  ; LAB_100108dd
    MOV CX,word ptr [ESP + 0x2]         ; 100108cc
        ;   Label: LAB_100108cc
    ADD ESP,0x4                         ; 100108d1
    AND CX,word ptr [ESP + 0x8]         ; 100108d4
    MOVZX EAX,CX                        ; 100108d9
    RET                                 ; 100108dc
    XOR EAX,EAX                         ; 100108dd
        ;   Label: LAB_100108dd
    ADD ESP,0x4                         ; 100108df
    RET                                 ; 100108e2


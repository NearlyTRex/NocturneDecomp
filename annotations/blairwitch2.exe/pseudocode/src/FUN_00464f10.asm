; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00464f10(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_00464f60 at 00464ff7
;
; Referenced Globals:
;   TerminatedCString s_Shot_thru_the_heart_005d1180
;   undefined4 DAT_005d119c
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00436710
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00464f10
        ;   Label: FUN_00464f10
    MOV EAX,dword ptr [ESP + 0x10]      ; 00464f13
    CMP dword ptr [EAX + 0x30],0x6c     ; 00464f17
    JZ 0x00464f31                       ; 00464f1b
        ;   XREF to: 00464f31 (CONDITIONAL_JUMP)  ; LAB_00464f31
    MOV ECX,dword ptr [ESP + 0xc]       ; 00464f1d
    MOV EDX,dword ptr [EAX]             ; 00464f21
    CMP EDX,dword ptr [ECX + 0x10b10]   ; 00464f23
    JNZ 0x00464f31                      ; 00464f29
        ;   XREF to: 00464f31 (CONDITIONAL_JUMP)  ; LAB_00464f31
    CMP dword ptr [EAX + 0x30],0x68     ; 00464f2b
    JZ 0x00464f35                       ; 00464f2f
        ;   XREF to: 00464f35 (CONDITIONAL_JUMP)  ; LAB_00464f35
    ADD ESP,0x8                         ; 00464f31
        ;   Label: LAB_00464f31
    RET                                 ; 00464f34
    PUSH EDI                            ; 00464f35
        ;   Label: LAB_00464f35
    FLD float ptr [EAX + 0x4]           ; 00464f36
    PUSH 0x5d1180                       ; 00464f39 | = "Shot thru the heart\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00464f3e | PTR_DAT_00609ed0
    FLD ST0                             ; 00464f44
    FMUL double ptr [0x005d119c]        ; 00464f46 | DAT_005d119c
    PUSH EDI                            ; 00464f4c | DAT_007c158c
    FSTP ST1                            ; 00464f4d
    FSTP float ptr [EAX + 0x4]          ; 00464f4f
    CALL FUN_00436710                   ; 00464f52
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x8                         ; 00464f57
    POP EDI                             ; 00464f5a
    ADD ESP,0x8                         ; 00464f5b
    RET                                 ; 00464f5e


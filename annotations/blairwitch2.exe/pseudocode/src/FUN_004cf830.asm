; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf830(int param_1)
;
;
; XREF[3]:
;   FUN_00450c60 at 00452430
;   FUN_004ad640 at 004ae99c
;   FUN_00563060 at 00564872
;
; Referenced Globals:
;   undefined4 DAT_007bc9e8
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf830
        ;   Label: FUN_004cf830
    PUSH EBP                            ; 004cf831
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cf832
    MOV EDX,dword ptr [EBX + 0x2560c]   ; 004cf836
    TEST EDX,EDX                        ; 004cf83c
    JNZ 0x004cf843                      ; 004cf83e
        ;   XREF to: 004cf843 (CONDITIONAL_JUMP)  ; LAB_004cf843
    POP EBP                             ; 004cf840
    POP EBX                             ; 004cf841
    RET                                 ; 004cf842
    PUSH EDI                            ; 004cf843
        ;   Label: LAB_004cf843
    MOV ECX,dword ptr [0x007bc9e8]      ; 004cf844 | DAT_007bc9e8
    PUSH ECX                            ; 004cf84a
    PUSH EDX                            ; 004cf84b
    CALL FUN_0040c8f0                   ; 004cf84c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EDI,dword ptr [EAX + 0x47c]     ; 004cf851
    ADD ESP,0x8                         ; 004cf857
    CMP EBX,EDI                         ; 004cf85a
    JNZ 0x004cf877                      ; 004cf85c
        ;   XREF to: 004cf877 (CONDITIONAL_JUMP)  ; LAB_004cf877
    MOV EBP,dword ptr [EAX + 0x484]     ; 004cf85e
    PUSH EBP                            ; 004cf864
    MOV dword ptr [EAX + 0x47c],0x0     ; 004cf865
    CALL FUN_00551050                   ; 004cf86f
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 004cf874
    MOV dword ptr [EBX + 0x2560c],0x0   ; 004cf877
        ;   Label: LAB_004cf877
    POP EDI                             ; 004cf881
    POP EBP                             ; 004cf882
    POP EBX                             ; 004cf883
    RET                                 ; 004cf884


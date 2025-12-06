; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_hero.cpp_CHero_FUN_004f37d0(CHero * this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_0062ecc6 = 0.100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f37d0
        ;   Label: core_hero.cpp_CHero_FUN_004f37d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f37d1
    PUSH EBX                            ; 004f37d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f37d6
    CALL dword ptr [EAX + 0x120]        ; 004f37dc
    ADD ESP,0x4                         ; 004f37e2
    CMP EAX,0x1                         ; 004f37e5
    JG 0x004f3881                       ; 004f37e8 | LAB_004f3881
        ;   XREF to: 004f3881 (CONDITIONAL_JUMP)
    JZ 0x004f3883                       ; 004f37ee | LAB_004f3883
        ;   XREF to: 004f3883 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe2c],0x0    ; 004f37f4
    JNZ 0x004f3885                      ; 004f37fb | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe30],0x0    ; 004f3801
    JNZ 0x004f3885                      ; 004f3808 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f380e
    JNZ 0x004f3885                      ; 004f3815 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 004f381b
    JNZ 0x004f3885                      ; 004f3822 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe40],0x0    ; 004f3824
    JNZ 0x004f3885                      ; 004f382b | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe44],0x0    ; 004f382d
    JNZ 0x004f3885                      ; 004f3834 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe48],0x0    ; 004f3836
    JNZ 0x004f3885                      ; 004f383d | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe4c]        ; 004f383f
    FABS                                ; 004f3845
    FCOMP double ptr [0x0062ecc6]       ; 004f3847 | double DOUBLE_0062ecc6
    FNSTSW AX                           ; 004f384d
    SAHF                                ; 004f384f
    JA 0x004f3885                       ; 004f3850 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe50]        ; 004f3852
    FABS                                ; 004f3858
    FCOMP double ptr [0x0062ecc6]       ; 004f385a | double DOUBLE_0062ecc6
    FNSTSW AX                           ; 004f3860
    SAHF                                ; 004f3862
    JA 0x004f3885                       ; 004f3863 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe54]        ; 004f3865
    FABS                                ; 004f386b
    FCOMP double ptr [0x0062ecc6]       ; 004f386d | double DOUBLE_0062ecc6
    FNSTSW AX                           ; 004f3873
    SAHF                                ; 004f3875
    JA 0x004f3885                       ; 004f3876 | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2410],0x0    ; 004f3878
    JZ 0x004f3885                       ; 004f387f | LAB_004f3885
        ;   XREF to: 004f3885 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004f3881
        ;   Label: LAB_004f3881
    POP EBX                             ; 004f3883
        ;   Label: LAB_004f3883
    RET                                 ; 004f3884
    MOV EAX,0x1                         ; 004f3885
        ;   Label: LAB_004f3885
    POP EBX                             ; 004f388a
    RET                                 ; 004f388b


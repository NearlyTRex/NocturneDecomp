; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(CZombie *this_ptr,int object_shape_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   object_shape_type
;
; XREF[3]:
;   core_zombie.cpp_CZombie_FUN_00561010 at 005611be
;   core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880 at 0056188b
;   core_zombie.cpp_CZombie_process_FUN_0055ef50 at 0055f40d
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_0059887a
;   TerminatedCString s_new_00598883
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c__strnicmp_FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005617e0
        ;   Label: core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0
    PUSH EBP                            ; 005617e1
    MOV EBP,ESP                         ; 005617e2
    MOV EBX,dword ptr [EBP + 0x10]      ; 005617e4
    CMP EBX,0x2                         ; 005617e7
    JZ 0x00561806                       ; 005617ea
        ;   XREF to: 00561806 (CONDITIONAL_JUMP)  ; LAB_00561806
    MOV EAX,dword ptr [EBP + 0xc]       ; 005617ec
    PUSH 0x59887a                       ; 005617ef | = "jeff.dfm"
    ADD EAX,0x23b0                      ; 005617f4
    PUSH EAX                            ; 005617f9
    CALL crt_string.c__stricmp_FUN_00564520 ; 005617fa
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005617ff
    TEST EAX,EAX                        ; 00561802
    JZ 0x00561836                       ; 00561804
        ;   XREF to: 00561836 (CONDITIONAL_JUMP)  ; LAB_00561836
    PUSH 0x3                            ; 00561806
        ;   Label: LAB_00561806
    MOV EAX,dword ptr [EBP + 0xc]       ; 00561808
    PUSH 0x598883                       ; 0056180b | = "new"
    ADD EAX,0x23b0                      ; 00561810
    PUSH EAX                            ; 00561815
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00561816
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056181b
    TEST EAX,EAX                        ; 0056181e
    JNZ 0x00561858                      ; 00561820
        ;   XREF to: 00561858 (CONDITIONAL_JUMP)  ; LAB_00561858
    CMP EBX,0x2                         ; 00561822
    JNC 0x00561840                      ; 00561825
        ;   XREF to: 00561840 (CONDITIONAL_JUMP)  ; LAB_00561840
    CMP EBX,0x1                         ; 00561827
    JNZ 0x00561847                      ; 0056182a
        ;   XREF to: 00561847 (CONDITIONAL_JUMP)  ; LAB_00561847
    MOV EBX,0x1                         ; 0056182c
        ;   Label: LAB_0056182c
    MOV EAX,EBX                         ; 00561831
    POP EBP                             ; 00561833
    POP EBX                             ; 00561834
    RET                                 ; 00561835
    MOV EBX,0xffffffff                  ; 00561836
        ;   Label: LAB_00561836
    MOV EAX,EBX                         ; 0056183b
    POP EBP                             ; 0056183d
    POP EBX                             ; 0056183e
    RET                                 ; 0056183f
    JBE 0x0056182c                      ; 00561840
        ;   XREF to: 0056182c (CONDITIONAL_JUMP)  ; LAB_0056182c
        ;   Label: LAB_00561840
    CMP EBX,0x3                         ; 00561842
    JZ 0x0056182c                       ; 00561845
        ;   XREF to: 0056182c (CONDITIONAL_JUMP)  ; LAB_0056182c
    MOV EBX,0xffffffff                  ; 00561847
        ;   Label: LAB_00561847
    MOV EAX,EBX                         ; 0056184c
    POP EBP                             ; 0056184e
    POP EBX                             ; 0056184f
    RET                                 ; 00561850
    XOR EBX,EBX                         ; 00561851
        ;   Label: LAB_00561851
    MOV EAX,EBX                         ; 00561853
    POP EBP                             ; 00561855
    POP EBX                             ; 00561856
    RET                                 ; 00561857
    CMP EBX,0x2                         ; 00561858
        ;   Label: LAB_00561858
    JNC 0x0056186c                      ; 0056185b
        ;   XREF to: 0056186c (CONDITIONAL_JUMP)  ; LAB_0056186c
    CMP EBX,0x1                         ; 0056185d
    JZ 0x0056182c                       ; 00561860
        ;   XREF to: 0056182c (CONDITIONAL_JUMP)  ; LAB_0056182c
    MOV EBX,0xffffffff                  ; 00561862
    MOV EAX,EBX                         ; 00561867
    POP EBP                             ; 00561869
    POP EBX                             ; 0056186a
    RET                                 ; 0056186b
    JBE 0x00561851                      ; 0056186c
        ;   XREF to: 00561851 (CONDITIONAL_JUMP)  ; LAB_00561851
        ;   Label: LAB_0056186c
    CMP EBX,0x3                         ; 0056186e
    JZ 0x0056182c                       ; 00561871
        ;   XREF to: 0056182c (CONDITIONAL_JUMP)  ; LAB_0056182c
    MOV EBX,0xffffffff                  ; 00561873
    MOV EAX,EBX                         ; 00561878
    POP EBP                             ; 0056187a
    POP EBX                             ; 0056187b
    RET                                 ; 0056187c


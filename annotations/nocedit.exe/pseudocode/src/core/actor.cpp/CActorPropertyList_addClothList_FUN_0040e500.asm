; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500(CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; CClothList *     Stack[0xc]:4   data_ptr
; int              Stack[0x10]:4   max_count
; Local Variables:
; char[200]        Stack[-0xd8]:200  local_d8
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 at 0042f753
;
; Referenced Globals:
;   TerminatedCString s_s_d_00614465
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e500
        ;   Label: core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500
    PUSH ESI                            ; 0040e501
    PUSH EDI                            ; 0040e502
    PUSH EBP                            ; 0040e503
    SUB ESP,0xc8                        ; 0040e504
    MOV EBP,dword ptr [ESP + 0xe0]      ; 0040e50a
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0040e511
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0040e518
    TEST ESI,ESI                        ; 0040e51f
    JL 0x0040e58b                       ; 0040e521
        ;   XREF to: 0040e58b (CONDITIONAL_JUMP)  ; LAB_0040e58b
    MOV EDX,dword ptr [EDI]             ; 0040e527
        ;   Label: LAB_0040e527
    CMP ESI,EDX                         ; 0040e529
    JL 0x0040e530                       ; 0040e52b
        ;   XREF to: 0040e530 (CONDITIONAL_JUMP)  ; LAB_0040e530
    LEA ESI,[EDX + 0x1]                 ; 0040e52d
    CMP ESI,0xa                         ; 0040e530
        ;   Label: LAB_0040e530
    JLE 0x0040e53a                      ; 0040e533
        ;   XREF to: 0040e53a (CONDITIONAL_JUMP)  ; LAB_0040e53a
    MOV ESI,0xa                         ; 0040e535
    XOR EBX,EBX                         ; 0040e53a
        ;   Label: LAB_0040e53a
    TEST ESI,ESI                        ; 0040e53c
    JLE 0x0040e580                      ; 0040e53e
        ;   XREF to: 0040e580 (CONDITIONAL_JUMP)  ; LAB_0040e580
    LEA EAX,[EBX + 0x1]                 ; 0040e540
        ;   Label: LAB_0040e540
    PUSH EAX                            ; 0040e543
    PUSH EBP                            ; 0040e544
    PUSH 0x614465                       ; 0040e545 | = "%s %d"
    LEA EAX,[ESP + 0xc]                 ; 0040e54a
    PUSH EAX                            ; 0040e54e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040e54f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040e554
    PUSH 0x0                            ; 0040e557
    PUSH EDI                            ; 0040e559
    LEA EAX,[ESP + 0x8]                 ; 0040e55a
    PUSH EAX                            ; 0040e55e
    PUSH 0xe                            ; 0040e55f
    MOV ECX,dword ptr [ESP + 0xec]      ; 0040e561
    PUSH ECX                            ; 0040e568
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e569
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e56e
    MOV dword ptr [EAX + 0x5c],EBX      ; 0040e571
    INC EBX                             ; 0040e574
    MOV dword ptr [EAX + 0x58],0x1      ; 0040e575
    CMP EBX,ESI                         ; 0040e57c
    JL 0x0040e540                       ; 0040e57e
        ;   XREF to: 0040e540 (CONDITIONAL_JUMP)  ; LAB_0040e540
    ADD ESP,0xc8                        ; 0040e580
        ;   Label: LAB_0040e580
    POP EBP                             ; 0040e586
    POP EDI                             ; 0040e587
    POP ESI                             ; 0040e588
    POP EBX                             ; 0040e589
    RET                                 ; 0040e58a
    MOV ESI,0xa                         ; 0040e58b
        ;   Label: LAB_0040e58b
    JMP 0x0040e527                      ; 0040e590
        ;   XREF to: 0040e527 (UNCONDITIONAL_JUMP)  ; LAB_0040e527


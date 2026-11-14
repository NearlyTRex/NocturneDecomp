; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   part_name
; int              Stack[0xc]:4   error_if_not_found
;
; XREF[12]:
;   core_carved.cpp_CCarved_setup_FUN_00425ab0 at 00425bd8
;   core_charactr.cpp_FUN_0042d500 at 0042d6ce
;   core_construc.cpp_CConstruct_setup_FUN_004425f0 at 0044278a
;   core_cow.cpp_CZombieCow_setup_FUN_00444fd0 at 00445039
;   core_demnfolk.cpp_CDemnfolk_setup_FUN_00454d20 at 00454e4b
;   core_gargoyle.cpp_CGargoyle_setup_FUN_004c4ee0 at 004c5082
;   core_ghoul.cpp_CGhoul_setup_FUN_004c6a10 at 004c6b2b
;   core_imp.cpp_CImp_setup_FUN_004d6770 at 004d6916
;   core_moocow.cpp_CMooCow_setup_FUN_004f8bb0 at 004f8c19
;   core_script.cpp_parseBodyPartMask_FUN_00528c20 at 00528c9a
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1d22
;   TerminatedCString s_Can_t_find_part_s_in_mod_005d1d37
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a310
        ;   Label: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
    PUSH ESI                            ; 0054a311
    PUSH EDI                            ; 0054a312
    PUSH EBP                            ; 0054a313
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054a314
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054a318
    MOV EDX,dword ptr [EDI + 0xc00]     ; 0054a31c
    XOR EBX,EBX                         ; 0054a322
    TEST EDX,EDX                        ; 0054a324
    JLE 0x0054a34a                      ; 0054a326
        ;   XREF to: 0054a34a (CONDITIONAL_JUMP)  ; LAB_0054a34a
    LEA ESI,[EDI + 0xc04]               ; 0054a328
    PUSH ESI                            ; 0054a32e
        ;   Label: LAB_0054a32e
    PUSH EBP                            ; 0054a32f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0054a330
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054a335
    TEST EAX,EAX                        ; 0054a338
    JZ 0x0054a35b                       ; 0054a33a
        ;   XREF to: 0054a35b (CONDITIONAL_JUMP)  ; LAB_0054a35b
    INC EBX                             ; 0054a33c
    MOV ECX,dword ptr [EDI + 0xc00]     ; 0054a33d
    ADD ESI,0x60                        ; 0054a343
    CMP EBX,ECX                         ; 0054a346
    JL 0x0054a32e                       ; 0054a348
        ;   XREF to: 0054a32e (CONDITIONAL_JUMP)  ; LAB_0054a32e
    CMP dword ptr [ESP + 0x1c],0x0      ; 0054a34a
        ;   Label: LAB_0054a34a
    JNZ 0x0054a362                      ; 0054a34f
        ;   XREF to: 0054a362 (CONDITIONAL_JUMP)  ; LAB_0054a362
    MOV EAX,0xffffffff                  ; 0054a351
    POP EBP                             ; 0054a356
    POP EDI                             ; 0054a357
    POP ESI                             ; 0054a358
    POP EBX                             ; 0054a359
    RET                                 ; 0054a35a
    MOV EAX,EBX                         ; 0054a35b
        ;   Label: LAB_0054a35b
    POP EBP                             ; 0054a35d
    POP EDI                             ; 0054a35e
    POP ESI                             ; 0054a35f
    POP EBX                             ; 0054a360
    RET                                 ; 0054a361
    ADD EDI,0x35b0                      ; 0054a362
        ;   Label: LAB_0054a362
    PUSH EDI                            ; 0054a368
    PUSH EBP                            ; 0054a369
    MOV ESI,0x5d1d22                    ; 0054a36a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x5d8                       ; 0054a36f
    PUSH 0x5d1d37                       ; 0054a374 | = "Can't find part %s in model %s"
    MOV dword ptr [0x01d71de0],ESI      ; 0054a379 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0054a37f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054a384
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0054a389
    MOV EAX,0xffffffff                  ; 0054a38c
    POP EBP                             ; 0054a391
    POP EDI                             ; 0054a392
    POP ESI                             ; 0054a393
    POP EBX                             ; 0054a394
    RET                                 ; 0054a395


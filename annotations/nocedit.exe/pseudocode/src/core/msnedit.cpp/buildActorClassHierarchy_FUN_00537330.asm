; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330(CStrList *class_list,CDemonActor *parent_class,int indent_level)
;
; Parameters:
; CStrList *       Stack[0x4]:4   class_list
; CDemonActor *    Stack[0x8]:4   parent_class
; int              Stack[0xc]:4   indent_level
; Local Variables:
; char[100]        Stack[-0x80]:100  local_80
; char *           Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005388c2
;
; Referenced Globals:
;   TerminatedCString s_s_d_0063b7a4
;   TerminatedCString s_abstract_0063b7aa
;   undefined4 s_(abstract)_0063b7ab
;   undefined4 s_abstract)_0063b7ac
;   undefined4 s_bstract)_0063b7ad
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   undefined4 g_ActorClassRegistrations[1]
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537330
        ;   Label: core_msnedit.cpp_buildActorClassHierarchy_FUN_00537330
    PUSH ESI                            ; 00537331
    PUSH EDI                            ; 00537332
    PUSH EBP                            ; 00537333
    SUB ESP,0x70                        ; 00537334
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00537337
    XOR EDX,EDX                         ; 0053733e
    MOV ECX,dword ptr [0x00822044]      ; 00537340 | g_NumActorClassTypes
    MOV dword ptr [ESP + 0x6c],EDX      ; 00537346
    TEST ECX,ECX                        ; 0053734a
    JLE 0x00537389                      ; 0053734c
        ;   XREF to: 00537389 (CONDITIONAL_JUMP)  ; LAB_00537389
    LEA EDI,[EBX + 0x1]                 ; 0053734e
    MOV dword ptr [ESP + 0x68],EDI      ; 00537351
    ADD EBX,EBX                         ; 00537355
    MOV EDI,ESP                         ; 00537357
    ADD EDI,EBX                         ; 00537359
    XOR EBP,EBP                         ; 0053735b
    MOV dword ptr [ESP + 0x64],EDI      ; 0053735d
    MOV EBX,dword ptr [EBP + 0x822048]  ; 00537361 | g_ActorClassRegistrations | g_ActorClassRegistrations[1]
        ;   Label: LAB_00537361
    MOV EAX,dword ptr [ESP + 0x88]      ; 00537367
    CMP EAX,dword ptr [EBX + 0x28]      ; 0053736e
    JZ 0x00537391                       ; 00537371
        ;   XREF to: 00537391 (CONDITIONAL_JUMP)  ; LAB_00537391
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00537373
        ;   Label: LAB_00537373
    MOV ESI,dword ptr [0x00822044]      ; 00537377 | g_NumActorClassTypes
    INC EBX                             ; 0053737d
    ADD EBP,0x4                         ; 0053737e
    MOV dword ptr [ESP + 0x6c],EBX      ; 00537381
    CMP EBX,ESI                         ; 00537385
    JL 0x00537361                       ; 00537387
        ;   XREF to: 00537361 (CONDITIONAL_JUMP)  ; LAB_00537361
    ADD ESP,0x70                        ; 00537389
        ;   Label: LAB_00537389
    POP EBP                             ; 0053738c
    POP EDI                             ; 0053738d
    POP ESI                             ; 0053738e
    POP EBX                             ; 0053738f
    RET                                 ; 00537390
    PUSH 0x64                           ; 00537391
        ;   Label: LAB_00537391
    PUSH 0x20                           ; 00537393
    LEA EDI,[ESP + 0x8]                 ; 00537395
    PUSH EDI                            ; 00537399
    CALL crt_memory.c_memset_FUN_005fde40 ; 0053739a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0053739f
    MOV EDX,dword ptr [EBX + 0x34]      ; 005373a2
    PUSH EDX                            ; 005373a5
    PUSH EBX                            ; 005373a6
    PUSH 0x63b7a4                       ; 005373a7 | = "%s\t%d"
    MOV ECX,dword ptr [ESP + 0x70]      ; 005373ac
    PUSH ECX                            ; 005373b0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005373b1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV ESI,dword ptr [EBX + 0x2c]      ; 005373b6
    ADD ESP,0x10                        ; 005373b9
    TEST ESI,ESI                        ; 005373bc
    JNZ 0x005373e9                      ; 005373be
        ;   XREF to: 005373e9 (CONDITIONAL_JUMP)  ; LAB_005373e9
    MOV ESI,0x63b7aa                    ; 005373c0 | = "\t(abstract)"
    MOV EDI,ESP                         ; 005373c5
    PUSH EDI                            ; 005373c7
    SUB ECX,ECX                         ; 005373c8
    DEC ECX                             ; 005373ca
    MOV AL,0x0                          ; 005373cb
    SCASB.REPNE ES:EDI                  ; 005373cd
    DEC EDI                             ; 005373cf
    MOV AL,byte ptr [ESI]               ; 005373d0 | = "\t(abstract)" | s_abstract)_0063b7ac
        ;   Label: LAB_005373d0
    MOV byte ptr [EDI],AL               ; 005373d2
    CMP AL,0x0                          ; 005373d4
    JZ 0x005373e8                       ; 005373d6
        ;   XREF to: 005373e8 (CONDITIONAL_JUMP)  ; LAB_005373e8
    MOV AL,byte ptr [ESI + 0x1]         ; 005373d8 | s_(abstract)_0063b7ab | s_bstract)_0063b7ad
    ADD ESI,0x2                         ; 005373db
    MOV byte ptr [EDI + 0x1],AL         ; 005373de
    ADD EDI,0x2                         ; 005373e1
    CMP AL,0x0                          ; 005373e4
    JNZ 0x005373d0                      ; 005373e6
        ;   XREF to: 005373d0 (CONDITIONAL_JUMP)  ; LAB_005373d0
    POP EDI                             ; 005373e8
        ;   Label: LAB_005373e8
    MOV EDI,ESP                         ; 005373e9
        ;   Label: LAB_005373e9
    PUSH EDI                            ; 005373eb
    MOV EDI,dword ptr [ESP + 0x88]      ; 005373ec
    PUSH EDI                            ; 005373f3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005373f4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005373f9
    MOV EAX,dword ptr [ESP + 0x68]      ; 005373fc
    PUSH EAX                            ; 00537400
    PUSH EBX                            ; 00537401
    PUSH EDI                            ; 00537402
    CALL core_msnedit.cpp_buildActorClassHierarchy_FUN_00537330 ; 00537403
        ;   XREF to: 00537330 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_buildActorClassHierarchy_FUN_00537330(CStrList * class_list, CDemonActor * parent_class, int indent_level)
    ADD ESP,0xc                         ; 00537408
    JMP 0x00537373                      ; 0053740b
        ;   XREF to: 00537373 (UNCONDITIONAL_JUMP)  ; LAB_00537373


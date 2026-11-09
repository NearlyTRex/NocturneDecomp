; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00491680(CEventList *this_ptr,char *var_name,CDemonActor *actor)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   var_name
; CDemonActor *    Stack[0xc]:4   actor
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 005257a7
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005d4e49
;   TerminatedCString s_Tried_to_assign_actor_va_005d4e5b
;   TerminatedCString s_core_event_cpp_005d4e99
;   TerminatedCString s_CEventList_setActorVaria_005d4eab
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   core_event.cpp_CEventList_findActorVariable_FUN_004918d0
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491680
        ;   Label: core_event.cpp_CEventList_setActorVariable_FUN_00491680
    PUSH ESI                            ; 00491681
    PUSH EDI                            ; 00491682
    PUSH EBP                            ; 00491683
    SUB ESP,0x8                         ; 00491684
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00491687
    MOV EDI,dword ptr [ESP + 0x20]      ; 0049168b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0049168f
    TEST EBP,EBP                        ; 00491693
    JZ 0x004916cb                       ; 00491695
        ;   XREF to: 004916cb (CONDITIONAL_JUMP)  ; LAB_004916cb
    CMP byte ptr [EBP],0x0              ; 00491697
    JNZ 0x004916cb                      ; 0049169b
        ;   XREF to: 004916cb (CONDITIONAL_JUMP)  ; LAB_004916cb
    MOV EDX,0x5d4e49                    ; 0049169d | = "..\\core\\event.cpp"
    MOV ECX,0xe3d                       ; 004916a2
    PUSH EBP                            ; 004916a7
    MOV dword ptr [0x01d046a0],EDX      ; 004916a8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004916ae | DAT_01d046a4
    CALL core_actor.cpp_FUN_00408a50    ; 004916b4
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004916b9
    PUSH EAX                            ; 004916bc
    PUSH EDI                            ; 004916bd
    PUSH 0x5d4e5b                       ; 004916be | = "Tried to assign actor var %s an actor..."
    CALL core_main.c_FUN_004e4500       ; 004916c3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004916c8
    PUSH EDI                            ; 004916cb
        ;   Label: LAB_004916cb
    PUSH EBX                            ; 004916cc
    CALL core_event.cpp_CEventList_findActorVariable_FUN_004918d0 ; 004916cd
        ;   XREF to: 004918d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findActorVariable_FUN_004918d0(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004916d2
    ADD ESP,0x8                         ; 004916d4
    TEST EAX,EAX                        ; 004916d7
    JL 0x0049174f                       ; 004916d9
        ;   XREF to: 0049174f (CONDITIONAL_JUMP)  ; LAB_0049174f
    LEA EAX,[EBX + 0x37da]              ; 004916db
    MOV dword ptr [ESP],EAX             ; 004916e1
    MOV EAX,ESI                         ; 004916e4
    ADD EAX,EAX                         ; 004916e6
    MOV EDX,EAX                         ; 004916e8
    SHL EAX,0x4                         ; 004916ea
    SUB EAX,EDX                         ; 004916ed
    MOV EDX,dword ptr [ESP]             ; 004916ef
    ADD EDX,EAX                         ; 004916f2
    LEA ECX,[EBX + 0x34ec]              ; 004916f4
    MOV dword ptr [ESP + 0x4],EDX       ; 004916fa
    LEA EDX,[ECX + EAX*0x1]             ; 004916fe
    TEST EBP,EBP                        ; 00491701
    JZ 0x004917f9                       ; 00491703
        ;   XREF to: 004917f9 (CONDITIONAL_JUMP)  ; LAB_004917f9
    MOV ESI,EDI                         ; 00491709
    MOV EDI,EDX                         ; 0049170b
    PUSH EDI                            ; 0049170d
    MOV AL,byte ptr [ESI]               ; 0049170e
        ;   Label: LAB_0049170e
    MOV byte ptr [EDI],AL               ; 00491710
    CMP AL,0x0                          ; 00491712
    JZ 0x00491726                       ; 00491714
        ;   XREF to: 00491726 (CONDITIONAL_JUMP)  ; LAB_00491726
    MOV AL,byte ptr [ESI + 0x1]         ; 00491716
    ADD ESI,0x2                         ; 00491719
    MOV byte ptr [EDI + 0x1],AL         ; 0049171c
    ADD EDI,0x2                         ; 0049171f
    CMP AL,0x0                          ; 00491722
    JNZ 0x0049170e                      ; 00491724
        ;   XREF to: 0049170e (CONDITIONAL_JUMP)  ; LAB_0049170e
    POP EDI                             ; 00491726
        ;   Label: LAB_00491726
    MOV EDI,dword ptr [ESP + 0x4]       ; 00491727
    MOV ESI,EBP                         ; 0049172b
    PUSH EDI                            ; 0049172d
    MOV AL,byte ptr [ESI]               ; 0049172e
        ;   Label: LAB_0049172e
    MOV byte ptr [EDI],AL               ; 00491730
    CMP AL,0x0                          ; 00491732
    JZ 0x00491746                       ; 00491734
        ;   XREF to: 00491746 (CONDITIONAL_JUMP)  ; LAB_00491746
    MOV AL,byte ptr [ESI + 0x1]         ; 00491736
    ADD ESI,0x2                         ; 00491739
    MOV byte ptr [EDI + 0x1],AL         ; 0049173c
    ADD EDI,0x2                         ; 0049173f
    CMP AL,0x0                          ; 00491742
    JNZ 0x0049172e                      ; 00491744
        ;   XREF to: 0049172e (CONDITIONAL_JUMP)  ; LAB_0049172e
    POP EDI                             ; 00491746
        ;   Label: LAB_00491746
    ADD ESP,0x8                         ; 00491747
        ;   Label: LAB_00491747
    POP EBP                             ; 0049174a
    POP EDI                             ; 0049174b
    POP ESI                             ; 0049174c
    POP EBX                             ; 0049174d
    RET                                 ; 0049174e
    TEST EBP,EBP                        ; 0049174f
        ;   Label: LAB_0049174f
    JZ 0x00491747                       ; 00491751
        ;   XREF to: 00491747 (CONDITIONAL_JUMP)  ; LAB_00491747
    CMP dword ptr [EBX + 0x34e8],0x19   ; 00491753
    JL 0x00491781                       ; 0049175a
        ;   XREF to: 00491781 (CONDITIONAL_JUMP)  ; LAB_00491781
    PUSH 0x19                           ; 0049175c
    MOV ECX,0x5d4e99                    ; 0049175e | = "..\\core\\event.cpp"
    MOV ESI,0xe4a                       ; 00491763
    PUSH 0x5d4eab                       ; 00491768 | = "CEventList::setActorVariable - alread..."
    MOV dword ptr [0x01d046a0],ECX      ; 0049176d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00491773 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00491779
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0049177e
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00491781
        ;   Label: LAB_00491781
    ADD EAX,EAX                         ; 00491787
    MOV EDX,EAX                         ; 00491789
    SHL EAX,0x4                         ; 0049178b
    SUB EAX,EDX                         ; 0049178e
    MOV EDX,EAX                         ; 00491790
    LEA EAX,[EBX + 0x34ec]              ; 00491792
    ADD EAX,EDX                         ; 00491798
    MOV ESI,EDI                         ; 0049179a
    MOV EDI,EAX                         ; 0049179c
    PUSH EDI                            ; 0049179e
    MOV AL,byte ptr [ESI]               ; 0049179f
        ;   Label: LAB_0049179f
    MOV byte ptr [EDI],AL               ; 004917a1
    CMP AL,0x0                          ; 004917a3
    JZ 0x004917b7                       ; 004917a5
        ;   XREF to: 004917b7 (CONDITIONAL_JUMP)  ; LAB_004917b7
    MOV AL,byte ptr [ESI + 0x1]         ; 004917a7
    ADD ESI,0x2                         ; 004917aa
    MOV byte ptr [EDI + 0x1],AL         ; 004917ad
    ADD EDI,0x2                         ; 004917b0
    CMP AL,0x0                          ; 004917b3
    JNZ 0x0049179f                      ; 004917b5
        ;   XREF to: 0049179f (CONDITIONAL_JUMP)  ; LAB_0049179f
    POP EDI                             ; 004917b7
        ;   Label: LAB_004917b7
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004917b8
    ADD EAX,EAX                         ; 004917be
    MOV EDX,EAX                         ; 004917c0
    SHL EAX,0x4                         ; 004917c2
    LEA EDI,[EBX + 0x37da]              ; 004917c5
    SUB EAX,EDX                         ; 004917cb
    MOV ESI,EBP                         ; 004917cd
    ADD EDI,EAX                         ; 004917cf
    PUSH EDI                            ; 004917d1
    MOV AL,byte ptr [ESI]               ; 004917d2
        ;   Label: LAB_004917d2
    MOV byte ptr [EDI],AL               ; 004917d4
    CMP AL,0x0                          ; 004917d6
    JZ 0x004917ea                       ; 004917d8
        ;   XREF to: 004917ea (CONDITIONAL_JUMP)  ; LAB_004917ea
    MOV AL,byte ptr [ESI + 0x1]         ; 004917da
    ADD ESI,0x2                         ; 004917dd
    MOV byte ptr [EDI + 0x1],AL         ; 004917e0
    ADD EDI,0x2                         ; 004917e3
    CMP AL,0x0                          ; 004917e6
    JNZ 0x004917d2                      ; 004917e8
        ;   XREF to: 004917d2 (CONDITIONAL_JUMP)  ; LAB_004917d2
    POP EDI                             ; 004917ea
        ;   Label: LAB_004917ea
    INC dword ptr [EBX + 0x34e8]        ; 004917eb
    ADD ESP,0x8                         ; 004917f1
    POP EBP                             ; 004917f4
    POP EDI                             ; 004917f5
    POP ESI                             ; 004917f6
    POP EBX                             ; 004917f7
    RET                                 ; 004917f8
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 004917f9
        ;   Label: LAB_004917f9
    DEC EDI                             ; 004917ff
    MOV EAX,EDI                         ; 00491800
    SUB EAX,ESI                         ; 00491802
    ADD EAX,EAX                         ; 00491804
    MOV dword ptr [EBX + 0x34e8],EDI    ; 00491806
    MOV EDI,EAX                         ; 0049180c
    SHL EAX,0x4                         ; 0049180e
    SUB EAX,EDI                         ; 00491811
    PUSH EAX                            ; 00491813
    LEA EAX,[ESI + 0x1]                 ; 00491814
    ADD EAX,EAX                         ; 00491817
    MOV EDI,EAX                         ; 00491819
    SHL EAX,0x4                         ; 0049181b
    SUB EAX,EDI                         ; 0049181e
    ADD ECX,EAX                         ; 00491820
    PUSH ECX                            ; 00491822
    PUSH EDX                            ; 00491823
    MOV EDI,EAX                         ; 00491824
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00491826
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 0049182b
    SUB EAX,ESI                         ; 00491831
    ADD EAX,EAX                         ; 00491833
    MOV EDX,EAX                         ; 00491835
    SHL EAX,0x4                         ; 00491837
    ADD ESP,0xc                         ; 0049183a
    SUB EAX,EDX                         ; 0049183d
    MOV EBP,dword ptr [ESP]             ; 0049183f
    PUSH EAX                            ; 00491842
    ADD EDI,EBP                         ; 00491843
    PUSH EDI                            ; 00491845
    MOV EAX,dword ptr [ESP + 0xc]       ; 00491846
    PUSH EAX                            ; 0049184a
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0049184b
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00491850
    ADD ESP,0x8                         ; 00491853
    POP EBP                             ; 00491856
    POP EDI                             ; 00491857
    POP ESI                             ; 00491858
    POP EBX                             ; 00491859
    RET                                 ; 0049185a


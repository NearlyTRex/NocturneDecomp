; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004aa6d0(SNotesMap *this_ptr,STextView *view)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; STextView *      Stack[0x8]:4   view
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004a9950 at 004a9a5d
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c116a
;   TerminatedCString s_Out_of_memory_005c117f
;   undefined4 DAT_005c118d
;   TerminatedCString s_core_fldnotes_cpp_005c1192
;   TerminatedCString s_NotesMap_paginate_unable_005c11a7
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004aa780
;   core_fldnotes.cpp_STextView_addText_FUN_004a8ed0
;   core_fldnotes.cpp_STextView_placeResource_FUN_004a9150
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa6d0
        ;   Label: core_fldnotes.cpp_SNotesMap_paginate_FUN_004aa6d0
    PUSH ESI                            ; 004aa6d1
    PUSH EBP                            ; 004aa6d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004aa6d3
    PUSH 0x1c                           ; 004aa6d7
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004aa6d9
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004aa6de
    TEST EAX,EAX                        ; 004aa6e1
    JNZ 0x004aa727                      ; 004aa6e3
        ;   XREF to: 004aa727 (CONDITIONAL_JUMP)  ; LAB_004aa727
    MOV EBX,EAX                         ; 004aa6e5
        ;   Label: LAB_004aa6e5
    TEST EAX,EAX                        ; 004aa6e7
    JNZ 0x004aa710                      ; 004aa6e9
        ;   XREF to: 004aa710 (CONDITIONAL_JUMP)  ; LAB_004aa710
    PUSH EDI                            ; 004aa6eb
    MOV ECX,0x5c116a                    ; 004aa6ec | = "..\\core\\fldnotes.cpp"
    MOV EDI,0x892                       ; 004aa6f1
    PUSH 0x5c117f                       ; 004aa6f6 | = "Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 004aa6fb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004aa701 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004aa707
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004aa70c
    POP EDI                             ; 004aa70f
    PUSH EBX                            ; 004aa710
        ;   Label: LAB_004aa710
    PUSH ESI                            ; 004aa711
    CALL core_fldnotes.cpp_STextView_placeResource_FUN_004a9150 ; 004aa712
        ;   XREF to: 004a9150 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_placeResource_FUN_004a9150(STextView * this_ptr, SPageResource * resource)
    ADD ESP,0x8                         ; 004aa717
    TEST EAX,EAX                        ; 004aa71a
    JZ 0x004aa737                       ; 004aa71c
        ;   XREF to: 004aa737 (CONDITIONAL_JUMP)  ; LAB_004aa737
    MOV EAX,0x1                         ; 004aa71e
        ;   Label: LAB_004aa71e
    POP EBP                             ; 004aa723
    POP ESI                             ; 004aa724
    POP EBX                             ; 004aa725
    RET                                 ; 004aa726
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa727
        ;   Label: LAB_004aa727
    PUSH EDX                            ; 004aa72b
    PUSH EAX                            ; 004aa72c
    CALL core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004aa780 ; 004aa72d
        ;   XREF to: 004aa780 (UNCONDITIONAL_CALL)  ; SPageResourceMap * core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004aa780(SPageResourceMap * this_ptr, SNotesMap * map)
    ADD ESP,0x8                         ; 004aa732
    JMP 0x004aa6e5                      ; 004aa735
        ;   XREF to: 004aa6e5 (UNCONDITIONAL_JUMP)  ; LAB_004aa6e5
    PUSH 0x5c118d                       ; 004aa737 | DAT_005c118d
        ;   Label: LAB_004aa737
    PUSH ESI                            ; 004aa73c
    CALL core_fldnotes.cpp_STextView_addText_FUN_004a8ed0 ; 004aa73d
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_addText_FUN_004a8ed0(STextView * this_ptr, char * text)
    ADD ESP,0x8                         ; 004aa742
    PUSH EBX                            ; 004aa745
    PUSH ESI                            ; 004aa746
    CALL core_fldnotes.cpp_STextView_placeResource_FUN_004a9150 ; 004aa747
        ;   XREF to: 004a9150 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_placeResource_FUN_004a9150(STextView * this_ptr, SPageResource * resource)
    ADD ESP,0x8                         ; 004aa74c
    TEST EAX,EAX                        ; 004aa74f
    JNZ 0x004aa71e                      ; 004aa751
        ;   XREF to: 004aa71e (CONDITIONAL_JUMP)  ; LAB_004aa71e
    MOV EBP,0x5c1192                    ; 004aa753 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x899                       ; 004aa758
    PUSH 0x5c11a7                       ; 004aa75d | = "NotesMap::paginate - unable to add re..."
    MOV dword ptr [0x01d71de0],EBP      ; 004aa762 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004aa768 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004aa76d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004aa772
    MOV EAX,0x1                         ; 004aa775
    POP EBP                             ; 004aa77a
    POP ESI                             ; 004aa77b
    POP EBX                             ; 004aa77c
    RET                                 ; 004aa77d


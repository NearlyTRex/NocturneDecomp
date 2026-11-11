; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00540870(CSkeleton *this_ptr,int bone_count,int frame_count)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_count
; int              Stack[0xc]:4   frame_count
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00540aa0 at 00540b90
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e68f7
;   TerminatedCString s_Too_bony_005e690c
;   TerminatedCString s_core_skeleton_cpp_005e6916
;   TerminatedCString s_Out_of_hunk_in_CSkeleton_005e692b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_FUN_00540980
;   crt_memory.c_operator_new_array_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540870
        ;   Label: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00540870
    PUSH ESI                            ; 00540871
    PUSH EBP                            ; 00540872
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540873
    PUSH 0x0                            ; 00540877
    PUSH EBX                            ; 00540879
    CALL core_skeleton.cpp_FUN_00540980 ; 0054087a
        ;   XREF to: 00540980 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540980()
    ADD ESP,0x8                         ; 0054087f
    CMP dword ptr [ESP + 0x14],0x64     ; 00540882
    JLE 0x005408ac                      ; 00540887
        ;   XREF to: 005408ac (CONDITIONAL_JUMP)  ; LAB_005408ac
    MOV ECX,0x5e68f7                    ; 00540889 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xc7                        ; 0054088e
    PUSH 0x5e690c                       ; 00540893 | = "Too bony!"
    MOV dword ptr [0x01d046a0],ECX      ; 00540898 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054089e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005408a4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005408a9
    MOV EAX,dword ptr [ESP + 0x14]      ; 005408ac
        ;   Label: LAB_005408ac
    MOV dword ptr [EBX + 0x1d1f8],EAX   ; 005408b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005408b6
    MOV dword ptr [EBX + 0x1e00c],EAX   ; 005408ba
    MOV EAX,dword ptr [EBX + 0x1d1f8]   ; 005408c0
    IMUL EAX,dword ptr [EBX + 0x1e00c]  ; 005408c6
    SHL EAX,0x4                         ; 005408cd
    PUSH EAX                            ; 005408d0
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 005408d1
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    MOV EDX,dword ptr [EBX + 0x1e00c]   ; 005408d6
    MOV dword ptr [EBX + 0x1e010],EAX   ; 005408dc
    LEA EAX,[EDX*0x4 + 0x0]             ; 005408e2
    SUB EAX,EDX                         ; 005408e9
    ADD ESP,0x4                         ; 005408eb
    SHL EAX,0x2                         ; 005408ee
    PUSH EAX                            ; 005408f1
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 005408f2
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    MOV EDX,dword ptr [EBX + 0x1e00c]   ; 005408f7
    MOV dword ptr [EBX + 0x1e014],EAX   ; 005408fd
    LEA EAX,[EDX*0x4 + 0x0]             ; 00540903
    SUB EAX,EDX                         ; 0054090a
    ADD ESP,0x4                         ; 0054090c
    SHL EAX,0x2                         ; 0054090f
    PUSH EAX                            ; 00540912
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 00540913
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 00540918
    MOV EBP,dword ptr [EBX + 0x1e010]   ; 0054091b
    MOV dword ptr [EBX + 0x1e018],EAX   ; 00540921
    TEST EBP,EBP                        ; 00540927
    JZ 0x00540941                       ; 00540929
        ;   XREF to: 00540941 (CONDITIONAL_JUMP)  ; LAB_00540941
    CMP dword ptr [EBX + 0x1e014],0x0   ; 0054092b
    JZ 0x00540941                       ; 00540932
        ;   XREF to: 00540941 (CONDITIONAL_JUMP)  ; LAB_00540941
    CMP dword ptr [EBX + 0x1e018],0x0   ; 00540934
    JZ 0x00540941                       ; 0054093b
        ;   XREF to: 00540941 (CONDITIONAL_JUMP)  ; LAB_00540941
    POP EBP                             ; 0054093d
    POP ESI                             ; 0054093e
    POP EBX                             ; 0054093f
    RET                                 ; 00540940
    PUSH EDI                            ; 00540941
        ;   Label: LAB_00540941
    MOV EDI,dword ptr [EBX + 0x1e00c]   ; 00540942
    PUSH EDI                            ; 00540948
    MOV EBP,dword ptr [EBX + 0x1d1f8]   ; 00540949
    PUSH EBP                            ; 0054094f
    MOV ECX,0x5e6916                    ; 00540950 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xdb                        ; 00540955
    PUSH 0x5e692b                       ; 0054095a | = "Out of hunk in CSkeleton::allocMemory..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054095f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00540965 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054096b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00540970
    POP EDI                             ; 00540973
    POP EBP                             ; 00540974
    POP ESI                             ; 00540975
    POP EBX                             ; 00540976
    RET                                 ; 00540977


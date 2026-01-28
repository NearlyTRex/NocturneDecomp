; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_memory_c_dispatchObjectArrayConstructor_FUN_00601200 (void *array_ptr,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_ptr
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[2]:
;   crt_memory.c_constructTypedObjectArray_FUN_00601232 at 0060124f
;   crt_unknown.c_AnotherFunctorCall2_FUN_00601258 at 00601268
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00601200
        ;   Label: crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
    MOV ECX,dword ptr [ESP + 0xc]       ; 00601204
    TEST EDX,EDX                        ; 00601208
    JZ 0x00601228                       ; 0060120a
        ;   XREF to: 00601228 (CONDITIONAL_JUMP)  ; LAB_00601228
    XOR EAX,EAX                         ; 0060120c
    MOV AL,byte ptr [ECX]               ; 0060120e
    CMP EAX,0x4                         ; 00601210
    JNZ 0x0060122b                      ; 00601213
        ;   XREF to: 0060122b (CONDITIONAL_JUMP)  ; LAB_0060122b
    MOV EAX,0x608dc8                    ; 00601215
    PUSH ECX                            ; 0060121a
        ;   Label: LAB_0060121a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060121b
    PUSH ECX                            ; 0060121f
    PUSH EDX                            ; 00601220
    CALL EAX                            ; 00601221 | void * crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00601223
    MOV EDX,EAX                         ; 00601226
    MOV EAX,EDX                         ; 00601228
        ;   Label: LAB_00601228
    RET                                 ; 0060122a
    MOV EAX,0x5fe667                    ; 0060122b
        ;   Label: LAB_0060122b
    JMP 0x0060121a                      ; 00601230
        ;   XREF to: 0060121a (UNCONDITIONAL_JUMP)  ; LAB_0060121a


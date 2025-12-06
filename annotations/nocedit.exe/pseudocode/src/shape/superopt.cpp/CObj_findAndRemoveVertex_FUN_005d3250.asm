; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_findAndRemoveVertex_FUN_005d3250(CObj * this_ptr, CVert * vertex_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVert *          Stack[0x8]:4   vertex_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3250
        ;   Label: shape_superopt.cpp_CObj_findAndRemoveVertex_FUN_005d3250
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d3251
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d3255
    PUSH EDX                            ; 005d3259
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d325a
    PUSH EBX                            ; 005d325d
    CALL dword ptr [EAX + 0x60]         ; 005d325e
    ADD ESP,0x8                         ; 005d3261
    CMP EAX,-0x1                        ; 005d3264
    JNZ 0x005d326d                      ; 005d3267 | LAB_005d326d
        ;   XREF to: 005d326d (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005d3269
    POP EBX                             ; 005d326b
    RET                                 ; 005d326c
    PUSH EAX                            ; 005d326d
        ;   Label: LAB_005d326d
    MOV EDX,dword ptr [EBX + 0x18]      ; 005d326e
    PUSH EBX                            ; 005d3271
    CALL dword ptr [EDX + 0x54]         ; 005d3272
    ADD ESP,0x8                         ; 005d3275
    POP EBX                             ; 005d3278
    RET                                 ; 005d3279


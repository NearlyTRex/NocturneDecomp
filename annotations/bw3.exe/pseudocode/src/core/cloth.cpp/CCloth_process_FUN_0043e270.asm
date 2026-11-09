; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_process_FUN_0043e270(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
;
; XREF[1]:
;   core_cloth.cpp_CClothList_process_FUN_0043fc00 at 0043fc34
;
; Called Functions:
;   core_cloth.cpp_FUN_0043e2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e270
        ;   Label: core_cloth.cpp_CCloth_process_FUN_0043e270
    PUSH ESI                            ; 0043e271
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043e272
    PUSH EDX                            ; 0043e276
    PUSH dword ptr [ESP + 0x20]         ; 0043e277
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0043e27b
    PUSH dword ptr [ESP + 0x20]         ; 0043e27f
    PUSH ECX                            ; 0043e283
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043e284
    PUSH EBX                            ; 0043e288
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043e289
    PUSH ESI                            ; 0043e28d
    CALL core_cloth.cpp_FUN_0043e2a0    ; 0043e28e
        ;   XREF to: 0043e2a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e2a0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0043e293
    POP ESI                             ; 0043e296
    POP EBX                             ; 0043e297
    RET                                 ; 0043e298


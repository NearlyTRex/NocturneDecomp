; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_copyVector_FUN_0040d230(CVector3f *dst_ptr,CVector3f *src_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dst_ptr
; CVector3f *      Stack[0x8]:4   src_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c408
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d230
        ;   Label: core_actor.cpp_copyVector_FUN_0040d230
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d234
    CMP EAX,EDX                         ; 0040d238
    JNZ 0x0040d23d                      ; 0040d23a
        ;   XREF to: 0040d23d (CONDITIONAL_JUMP)  ; LAB_0040d23d
    RET                                 ; 0040d23c
    MOV ECX,dword ptr [EDX]             ; 0040d23d
        ;   Label: LAB_0040d23d
    MOV dword ptr [EAX],ECX             ; 0040d23f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040d241
    MOV dword ptr [EAX + 0x4],ECX       ; 0040d244
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040d247
    MOV dword ptr [EAX + 0x8],ECX       ; 0040d24a
    RET                                 ; 0040d24d


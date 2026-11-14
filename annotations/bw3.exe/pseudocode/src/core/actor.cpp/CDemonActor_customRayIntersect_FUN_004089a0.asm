; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_004089a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b543e
;   TerminatedCString s_CDemonActor_customRayInt_005b5450
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004089a0
        ;   Label: core_actor.cpp_CDemonActor_customRayIntersect_FUN_004089a0
    MOV EDX,0x5b543e                    ; 004089a1 | = "..\\core\\actor.cpp"
    MOV ECX,0x2dc                       ; 004089a6
    PUSH 0x5b5450                       ; 004089ab | = "CDemonActor::customRayIntersect shoul..."
    MOV EBX,0x40000000                  ; 004089b0
    MOV dword ptr [0x01d71de0],EDX      ; 004089b5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004089bb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004089c1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004089c6
    MOV EAX,EBX                         ; 004089c9
    POP EBX                             ; 004089cb
    RET                                 ; 004089cc


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408960(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2406
;   TerminatedCString s_CDemonActor_customRayInt_005d2418
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408960
        ;   Label: core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408960
    MOV EDX,0x5d2406                    ; 00408961 | = "..\\core\\actor.cpp"
    MOV ECX,0x2dc                       ; 00408966
    PUSH 0x5d2418                       ; 0040896b | = "CDemonActor::customRayIntersect shoul..."
    MOV EBX,0x40000000                  ; 00408970
    MOV dword ptr [0x01d1d400],EDX      ; 00408975 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040897b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00408981
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00408986
    MOV EAX,EBX                         ; 00408989
    POP EBX                             ; 0040898b
    RET                                 ; 0040898c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_imp_cpp_CImp_attractActorToward_FUN_004d7b60(CImp *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004d7b60
        ;   Label: core_imp.cpp_CImp_attractActorToward_FUN_004d7b60
    SETNZ AL                            ; 004d7b65
    AND EAX,0xff                        ; 004d7b68
    RET                                 ; 004d7b6d


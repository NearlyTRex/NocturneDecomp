; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408c70(CDemonActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00408c70
        ;   Label: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408c70
    MOV dword ptr [EAX + 0x4],0x0       ; 00408c74
    MOV dword ptr [EAX + 0x8],0xc0800000 ; 00408c7b
    MOV dword ptr [EAX + 0xc],0x40800000 ; 00408c82
    MOV dword ptr [EAX + 0x10],0x41000000 ; 00408c89
    MOV dword ptr [EAX + 0x14],0x40800000 ; 00408c90
    MOV dword ptr [EAX],0xc0800000      ; 00408c97
    RET                                 ; 00408c9d


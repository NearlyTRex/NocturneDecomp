; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_004093f0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_hit_normal,void *unused)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_hit_normal
; void *           Stack[0x14]:4   unused
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004093f0
        ;   Label: core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0
    SUB ESP,0x30                        ; 004093f1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004093f4
    MOV EAX,ESP                         ; 004093f8
    PUSH EAX                            ; 004093fa
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 004093fb
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00409400
    MOV EAX,dword ptr [ESP + 0x48]      ; 00409403
    MOV dword ptr [ESP],EAX             ; 00409407
    MOV EAX,ESP                         ; 0040940a
    PUSH EAX                            ; 0040940c
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040940d
    PUSH EBX                            ; 00409413
    CALL dword ptr [EDX + 0x34]         ; 00409414
    ADD ESP,0x8                         ; 00409417
    TEST EAX,EAX                        ; 0040941a
    JNZ 0x0040942f                      ; 0040941c
        ;   XREF to: 0040942f (CONDITIONAL_JUMP)  ; LAB_0040942f
    MOV dword ptr [ESP + 0x28],0x40000000 ; 0040941e
    MOV EAX,dword ptr [ESP + 0x28]      ; 00409426
    ADD ESP,0x30                        ; 0040942a
    POP EBX                             ; 0040942d
    RET                                 ; 0040942e
    PUSH EDI                            ; 0040942f
        ;   Label: LAB_0040942f
    PUSH ESI                            ; 00409430
    MOV EDX,dword ptr [ESP + 0x54]      ; 00409431
    PUSH EDX                            ; 00409435
    PUSH EAX                            ; 00409436
    LEA EAX,[ESP + 0x10]                ; 00409437
    PUSH EAX                            ; 0040943b
    MOV ECX,dword ptr [ESP + 0x58]      ; 0040943c
    PUSH ECX                            ; 00409440
    MOV ESI,dword ptr [ESP + 0x58]      ; 00409441
    PUSH ESI                            ; 00409445
    MOV EDI,dword ptr [ESP + 0x58]      ; 00409446
    PUSH EDI                            ; 0040944a
    PUSH EBX                            ; 0040944b
    CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 ; 0040944c
        ;   XREF to: 00409470 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_hit_normal, ...)
    MOV dword ptr [ESP + 0x50],EAX      ; 00409451
    FLD float ptr [ESP + 0x50]          ; 00409455
    ADD ESP,0x1c                        ; 00409459
    FSTP float ptr [ESP + 0x30]         ; 0040945c
    POP ESI                             ; 00409460
    POP EDI                             ; 00409461
    MOV EAX,dword ptr [ESP + 0x28]      ; 00409462
    ADD ESP,0x30                        ; 00409466
    POP EBX                             ; 00409469
    RET                                 ; 0040946a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_0040a6c0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,int ray_type,CBoundingBox3D *clip_bounds)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; SActorRayHit *   Stack[0x10]:4   out_hit
; int              Stack[0x14]:4   ray_type
; CBoundingBox3D * Stack[0x18]:4   clip_bounds
;
; Called Functions:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a6c0
        ;   Label: core_actor.cpp_CDemonActor_testRayIntersection_FUN_0040a6c0
    SUB ESP,0x30                        ; 0040a6c1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040a6c4
    MOV EAX,ESP                         ; 0040a6c8
    PUSH EAX                            ; 0040a6ca
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0040a6cb
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a6d0
    MOV EAX,dword ptr [ESP + 0x48]      ; 0040a6d3
    MOV dword ptr [ESP],EAX             ; 0040a6d7
    MOV EAX,ESP                         ; 0040a6da
    PUSH EAX                            ; 0040a6dc
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040a6dd
    PUSH EBX                            ; 0040a6e3
    CALL dword ptr [EDX + 0x34]         ; 0040a6e4
    ADD ESP,0x8                         ; 0040a6e7
    TEST EAX,EAX                        ; 0040a6ea
    JNZ 0x0040a6ff                      ; 0040a6ec
        ;   XREF to: 0040a6ff (CONDITIONAL_JUMP)  ; LAB_0040a6ff
    MOV dword ptr [ESP + 0x28],0x40000000 ; 0040a6ee
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040a6f6
    ADD ESP,0x30                        ; 0040a6fa
    POP EBX                             ; 0040a6fd
    RET                                 ; 0040a6fe
    PUSH EDI                            ; 0040a6ff
        ;   Label: LAB_0040a6ff
    PUSH ESI                            ; 0040a700
    MOV EDX,dword ptr [ESP + 0x54]      ; 0040a701
    PUSH EDX                            ; 0040a705
    PUSH EAX                            ; 0040a706
    LEA EAX,[ESP + 0x10]                ; 0040a707
    PUSH EAX                            ; 0040a70b
    MOV ECX,dword ptr [ESP + 0x58]      ; 0040a70c
    PUSH ECX                            ; 0040a710
    MOV ESI,dword ptr [ESP + 0x58]      ; 0040a711
    PUSH ESI                            ; 0040a715
    MOV EDI,dword ptr [ESP + 0x58]      ; 0040a716
    PUSH EDI                            ; 0040a71a
    PUSH EBX                            ; 0040a71b
    CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 ; 0040a71c
        ;   XREF to: 0040a740 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, SActorRayHit * out_hit, ...)
    MOV dword ptr [ESP + 0x50],EAX      ; 0040a721
    FLD float ptr [ESP + 0x50]          ; 0040a725
    ADD ESP,0x1c                        ; 0040a729
    FSTP float ptr [ESP + 0x30]         ; 0040a72c
    POP ESI                             ; 0040a730
    POP EDI                             ; 0040a731
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040a732
    ADD ESP,0x30                        ; 0040a736
    POP EBX                             ; 0040a739
    RET                                 ; 0040a73a


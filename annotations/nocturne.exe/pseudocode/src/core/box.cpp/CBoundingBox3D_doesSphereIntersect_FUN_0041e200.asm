; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   sphere_center
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b675
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e200
        ;   Label: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
    SUB ESP,0x1c                        ; 0041e201
    MOV EBX,dword ptr [ESP + 0x28]      ; 0041e204
    PUSH EBX                            ; 0041e208
    LEA EAX,[ESP + 0x4]                 ; 0041e209
    PUSH EAX                            ; 0041e20d
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0041e20e
    PUSH EDX                            ; 0041e212
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160 ; 0041e213
        ;   XREF to: 0041e160 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    ADD ESP,0xc                         ; 0041e218
    FLD float ptr [ESP]                 ; 0041e21b
    FSUB float ptr [EBX]                ; 0041e21e
    FMUL ST0                            ; 0041e220
    FLD float ptr [ESP + 0x4]           ; 0041e222
    FSUB float ptr [EBX + 0x4]          ; 0041e226
    FMUL ST0                            ; 0041e229
    FLD float ptr [ESP + 0x8]           ; 0041e22b
    FXCH                                ; 0041e22f
    FADDP ST2,ST0                       ; 0041e231
    FSUB float ptr [EBX + 0x8]          ; 0041e233
    FMUL ST0                            ; 0041e236
    FLD float ptr [ESP + 0x2c]          ; 0041e238
    FLD ST0                             ; 0041e23c
    FXCH ST2                            ; 0041e23e
    FADDP ST3,ST0                       ; 0041e240
    FMULP                               ; 0041e242
    FXCH                                ; 0041e244
    FCOMPP                              ; 0041e246
    FNSTSW AX                           ; 0041e248
    SAHF                                ; 0041e24a
    SETBE AL                            ; 0041e24b
    AND EAX,0xff                        ; 0041e24e
    ADD ESP,0x1c                        ; 0041e253
    POP EBX                             ; 0041e256
    RET                                 ; 0041e257


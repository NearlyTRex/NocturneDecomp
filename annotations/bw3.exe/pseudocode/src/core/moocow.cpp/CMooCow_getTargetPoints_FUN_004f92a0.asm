; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_moocow_cpp_CMooCow_getTargetPoints_FUN_004f92a0(CMooCow *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CMooCow *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f92a0
        ;   Label: core_moocow.cpp_CMooCow_getTargetPoints_FUN_004f92a0
    PUSH ESI                            ; 004f92a1
    PUSH EDI                            ; 004f92a2
    SUB ESP,0x18                        ; 004f92a3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f92a6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f92aa
    MOV EDX,dword ptr [EAX + 0xcdcc]    ; 004f92ae
    PUSH EDX                            ; 004f92b4
    ADD EAX,0x158                       ; 004f92b5
    PUSH EAX                            ; 004f92ba
    LEA ESI,[ESP + 0x8]                 ; 004f92bb
    LEA EDI,[ESP + 0x14]                ; 004f92bf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004f92c3
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 004f92c8
    ADD ESP,0x8                         ; 004f92cc
    LEA EAX,[ESP + 0xc]                 ; 004f92cf
    MOVSD ES:EDI,ESI                    ; 004f92d3
    MOVSD ES:EDI,ESI                    ; 004f92d4
    MOVSD ES:EDI,ESI                    ; 004f92d5
    CMP EBX,EAX                         ; 004f92d6
    JNZ 0x004f92e6                      ; 004f92d8
        ;   XREF to: 004f92e6 (CONDITIONAL_JUMP)  ; LAB_004f92e6
    MOV EAX,0x1                         ; 004f92da
    ADD ESP,0x18                        ; 004f92df
    POP EDI                             ; 004f92e2
    POP ESI                             ; 004f92e3
    POP EBX                             ; 004f92e4
    RET                                 ; 004f92e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f92e6
        ;   Label: LAB_004f92e6
    MOV dword ptr [EBX],EAX             ; 004f92ea
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f92ec
    MOV dword ptr [EBX + 0x4],EAX       ; 004f92f0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f92f3
    MOV dword ptr [EBX + 0x8],EAX       ; 004f92f7
    MOV EAX,0x1                         ; 004f92fa
    ADD ESP,0x18                        ; 004f92ff
    POP EDI                             ; 004f9302
    POP ESI                             ; 004f9303
    POP EBX                             ; 004f9304
    RET                                 ; 004f9305


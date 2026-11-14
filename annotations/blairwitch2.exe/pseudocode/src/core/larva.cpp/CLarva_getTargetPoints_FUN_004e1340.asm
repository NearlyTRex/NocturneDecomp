; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_larva_cpp_CLarva_getTargetPoints_FUN_004e1340(CLarva *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1340
        ;   Label: core_larva.cpp_CLarva_getTargetPoints_FUN_004e1340
    PUSH ESI                            ; 004e1341
    PUSH EDI                            ; 004e1342
    SUB ESP,0x18                        ; 004e1343
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004e1346
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e134a
    PUSH 0x0                            ; 004e134e
    ADD EAX,0x2b4                       ; 004e1350
    PUSH EAX                            ; 004e1355
    LEA ESI,[ESP + 0x14]                ; 004e1356
    LEA EDI,[ESP + 0x8]                 ; 004e135a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004e135e
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 004e1363
    ADD ESP,0x8                         ; 004e1367
    MOV EAX,ESP                         ; 004e136a
    MOVSD ES:EDI,ESI                    ; 004e136c
    MOVSD ES:EDI,ESI                    ; 004e136d
    MOVSD ES:EDI,ESI                    ; 004e136e
    CMP EBX,EAX                         ; 004e136f
    JNZ 0x004e137f                      ; 004e1371
        ;   XREF to: 004e137f (CONDITIONAL_JUMP)  ; LAB_004e137f
    MOV EAX,0x1                         ; 004e1373
    ADD ESP,0x18                        ; 004e1378
    POP EDI                             ; 004e137b
    POP ESI                             ; 004e137c
    POP EBX                             ; 004e137d
    RET                                 ; 004e137e
    MOV EAX,dword ptr [ESP]             ; 004e137f
        ;   Label: LAB_004e137f
    MOV dword ptr [EBX],EAX             ; 004e1382
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1384
    MOV dword ptr [EBX + 0x4],EAX       ; 004e1388
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e138b
    MOV dword ptr [EBX + 0x8],EAX       ; 004e138f
    MOV EAX,0x1                         ; 004e1392
    ADD ESP,0x18                        ; 004e1397
    POP EDI                             ; 004e139a
    POP ESI                             ; 004e139b
    POP EBX                             ; 004e139c
    RET                                 ; 004e139d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d * segStart, CVector3d * segEnd, CVector3d * point)
;
; Parameters:
; CVector3d *      Stack[0x8]:4   segStart
; CVector3d *      Stack[0xc]:4   segEnd
; CVector3d *      Stack[0x10]:4   point
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x20]:8  local_20
;
; Called Functions:
;   shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d64a0
        ;   Label: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
    PUSH ESI                            ; 005d64a1
    PUSH EDI                            ; 005d64a2
    PUSH EBP                            ; 005d64a3
    MOV EBP,ESP                         ; 005d64a4
    SUB ESP,0x38                        ; 005d64a6
    AND ESP,0xfffffff8                  ; 005d64a9
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d64ac
    PUSH EBX                            ; 005d64af
    MOV EDX,dword ptr [EBP + 0x18]      ; 005d64b0
    PUSH EDX                            ; 005d64b3
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d64b4
    PUSH ECX                            ; 005d64b7
    LEA ESI,[ESP + 0xc]                 ; 005d64b8
    LEA EDI,[ESP + 0x1c]                ; 005d64bc
    CALL shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020 ; 005d64c0
        ;   XREF to: 005d6020 (UNCONDITIONAL_CALL)  ; CVector2d * shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020(CVector3d * segment_start, CVector3d * segment_end, CVector3d * query_point)
    LEA ESI,[ESP + 0xc]                 ; 005d64c5
    ADD ESP,0xc                         ; 005d64c9
    MOVSD ES:EDI,ESI                    ; 005d64cc
    MOVSD ES:EDI,ESI                    ; 005d64cd
    MOVSD ES:EDI,ESI                    ; 005d64ce
    MOVSD ES:EDI,ESI                    ; 005d64cf
    FLD double ptr [EBX]                ; 005d64d0
    FSUB double ptr [ESP + 0x10]        ; 005d64d2
    FMUL ST0                            ; 005d64d6
    FLD double ptr [EBX + 0x8]          ; 005d64d8
    FSUB double ptr [ESP + 0x18]        ; 005d64db
    FMUL ST0                            ; 005d64df
    FADDP                               ; 005d64e1
    FSQRT                               ; 005d64e3
    FSTP double ptr [ESP + 0x28]        ; 005d64e5
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d64e9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005d64ed
    MOV ESP,EBP                         ; 005d64f1
    POP EBP                             ; 005d64f3
    POP EDI                             ; 005d64f4
    POP ESI                             ; 005d64f5
    POP EBX                             ; 005d64f6
    RET                                 ; 005d64f7


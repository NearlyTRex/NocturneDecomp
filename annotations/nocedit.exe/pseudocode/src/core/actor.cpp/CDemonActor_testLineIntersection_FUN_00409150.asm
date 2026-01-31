; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150 (CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end, CVector3f *out_intersection_point)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   line_start
; CVector3f *      Stack[0xc]:4   line_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
;
; XREF[1]:
;   core_hero.cpp_CHero_testLineIntersection_FUN_004f25c0 at 004f25f5
;
; Called Functions:
;   core_actor.cpp_rayCylinderIntersect_FUN_00408340
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409150
        ;   Label: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
    PUSH ESI                            ; 00409151
    PUSH EDI                            ; 00409152
    PUSH EBP                            ; 00409153
    MOV EBP,ESP                         ; 00409154
    SUB ESP,0x68                        ; 00409156
    AND ESP,0xfffffff8                  ; 00409159
    MOV EBX,dword ptr [EBP + 0x18]      ; 0040915c
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0040915f
    MOV ESI,dword ptr [EBP + 0x20]      ; 00409162
    LEA EAX,[ESP + 0xc]                 ; 00409165
    PUSH EAX                            ; 00409169
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 0040916a
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0040916f
    XOR EDX,EDX                         ; 00409172
    MOV dword ptr [ESP + 0xc],EDX       ; 00409174
    LEA EDX,[ESP + 0xc]                 ; 00409178
    MOV EAX,dword ptr [EBP + 0x14]      ; 0040917c
    PUSH EDX                            ; 0040917f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00409180
    MOV EAX,dword ptr [EAX + 0x154]     ; 00409183
    PUSH ECX                            ; 00409189
    CALL dword ptr [EAX + 0x34]         ; 0040918a
    ADD ESP,0x8                         ; 0040918d
    CMP EAX,0x2                         ; 00409190
    JZ 0x0040919e                       ; 00409193
        ;   XREF to: 0040919e (CONDITIONAL_JUMP)  ; LAB_0040919e
    XOR EAX,EAX                         ; 00409195
        ;   Label: LAB_00409195
    MOV ESP,EBP                         ; 00409197
    POP EBP                             ; 00409199
    POP EDI                             ; 0040919a
    POP ESI                             ; 0040919b
    POP EBX                             ; 0040919c
    RET                                 ; 0040919d
    FLD float ptr [EDI]                 ; 0040919e
        ;   Label: LAB_0040919e
    LEA EAX,[ESP + 0x4c]                ; 004091a0
    FSUB float ptr [EBX]                ; 004091a4
    PUSH EAX                            ; 004091a6
    FSTP float ptr [ESP + 0x5c]         ; 004091a7
    LEA EAX,[ESP + 0x5c]                ; 004091ab
    FLD float ptr [EDI + 0x4]           ; 004091af
    PUSH EAX                            ; 004091b2
    FSUB float ptr [EBX + 0x4]          ; 004091b3
    LEA EAX,[ESP + 0x14]                ; 004091b6
    FSTP float ptr [ESP + 0x64]         ; 004091ba
    PUSH EBX                            ; 004091be
    FLD float ptr [EDI + 0x8]           ; 004091bf
    FSUB float ptr [EBX + 0x8]          ; 004091c2
    PUSH EAX                            ; 004091c5
    FSTP float ptr [ESP + 0x70]         ; 004091c6
    CALL core_actor.cpp_rayCylinderIntersect_FUN_00408340 ; 004091ca
        ;   XREF to: 00408340 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo * collision_info, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0x74],EAX      ; 004091cf
    FLD float ptr [ESP + 0x74]          ; 004091d3
    ADD ESP,0x10                        ; 004091d7
    FLDZ                                ; 004091da
    FXCH                                ; 004091dc
    FST float ptr [ESP + 0x8]           ; 004091de
    FSTP double ptr [ESP]               ; 004091e2
    FCOMP double ptr [ESP]              ; 004091e5
    FNSTSW AX                           ; 004091e8
    SAHF                                ; 004091ea
    JA 0x00409195                       ; 004091eb
        ;   XREF to: 00409195 (CONDITIONAL_JUMP)  ; LAB_00409195
    FLD1                                ; 004091ed
    FCOMP double ptr [ESP]              ; 004091ef
    FNSTSW AX                           ; 004091f2
    SAHF                                ; 004091f4
    JC 0x00409195                       ; 004091f5
        ;   XREF to: 00409195 (CONDITIONAL_JUMP)  ; LAB_00409195
    TEST ESI,ESI                        ; 004091f7
    JZ 0x0040925b                       ; 004091f9
        ;   XREF to: 0040925b (CONDITIONAL_JUMP)  ; LAB_0040925b
    FLD float ptr [ESP + 0x8]           ; 004091fb
    FLD float ptr [ESP + 0x58]          ; 004091ff
    FMUL ST1                            ; 00409203
    FLD float ptr [ESP + 0x5c]          ; 00409205
    FMUL ST2                            ; 00409209
    FLD float ptr [ESP + 0x60]          ; 0040920b
    FMULP ST3                           ; 0040920f
    FXCH                                ; 00409211
    FSTP float ptr [ESP + 0x34]         ; 00409213
    FSTP float ptr [ESP + 0x38]         ; 00409217
    FSTP float ptr [ESP + 0x3c]         ; 0040921b
    FLD float ptr [EBX]                 ; 0040921f
    FADD float ptr [ESP + 0x34]         ; 00409221
    FSTP float ptr [ESP + 0x40]         ; 00409225
    FLD float ptr [EBX + 0x4]           ; 00409229
    FADD float ptr [ESP + 0x38]         ; 0040922c
    FSTP float ptr [ESP + 0x44]         ; 00409230
    FLD float ptr [EBX + 0x8]           ; 00409234
    FADD float ptr [ESP + 0x3c]         ; 00409237
    LEA EAX,[ESP + 0x40]                ; 0040923b
    FSTP float ptr [ESP + 0x48]         ; 0040923f
    CMP ESI,EAX                         ; 00409243
    JZ 0x0040925b                       ; 00409245
        ;   XREF to: 0040925b (CONDITIONAL_JUMP)  ; LAB_0040925b
    MOV EAX,dword ptr [ESP + 0x40]      ; 00409247
    MOV dword ptr [ESI],EAX             ; 0040924b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040924d
    MOV dword ptr [ESI + 0x4],EAX       ; 00409251
    MOV EAX,dword ptr [ESP + 0x48]      ; 00409254
    MOV dword ptr [ESI + 0x8],EAX       ; 00409258
    MOV EAX,0x1                         ; 0040925b
        ;   Label: LAB_0040925b
    MOV ESP,EBP                         ; 00409260
    POP EBP                             ; 00409262
    POP EDI                             ; 00409263
    POP ESI                             ; 00409264
    POP EBX                             ; 00409265
    RET                                 ; 00409266


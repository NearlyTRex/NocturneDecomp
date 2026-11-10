; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408da0(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   line_start
; CVector3f *      Stack[0xc]:4   line_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
;
; XREF[1]:
;   core_hero.cpp_CHero_testLineIntersection_FUN_004d2760 at 004d2795
;
; Called Functions:
;   core_actor.cpp_FUN_00408100
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408da0
        ;   Label: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408da0
    PUSH ESI                            ; 00408da1
    PUSH EDI                            ; 00408da2
    PUSH EBP                            ; 00408da3
    MOV EBP,ESP                         ; 00408da4
    SUB ESP,0x8c                        ; 00408da6
    AND ESP,0xfffffff8                  ; 00408dac
    MOV EBX,dword ptr [EBP + 0x18]      ; 00408daf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00408db2
    LEA EAX,[ESP + 0xc]                 ; 00408db5
    PUSH EAX                            ; 00408db9
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 00408dba
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00408dbf
    XOR EDX,EDX                         ; 00408dc2
    MOV dword ptr [ESP + 0xc],EDX       ; 00408dc4
    LEA EDX,[ESP + 0xc]                 ; 00408dc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00408dcc
    PUSH EDX                            ; 00408dcf
    MOV ECX,dword ptr [EBP + 0x14]      ; 00408dd0
    MOV EAX,dword ptr [EAX + 0x154]     ; 00408dd3
    PUSH ECX                            ; 00408dd9
    CALL dword ptr [EAX + 0x3c]         ; 00408dda
    ADD ESP,0x8                         ; 00408ddd
    CMP EAX,0x2                         ; 00408de0
    JZ 0x00408dee                       ; 00408de3
        ;   XREF to: 00408dee (CONDITIONAL_JUMP)  ; LAB_00408dee
    XOR EAX,EAX                         ; 00408de5
        ;   Label: LAB_00408de5
    MOV ESP,EBP                         ; 00408de7
    POP EBP                             ; 00408de9
    POP EDI                             ; 00408dea
    POP ESI                             ; 00408deb
    POP EBX                             ; 00408dec
    RET                                 ; 00408ded
    FLD float ptr [ESI + 0x4]           ; 00408dee
        ;   Label: LAB_00408dee
    FLD float ptr [ESI + 0x8]           ; 00408df1
    FLD float ptr [ESI]                 ; 00408df4
    LEA EDI,[ESP + 0x58]                ; 00408df6
    LEA EAX,[ESP + 0x4c]                ; 00408dfa
    LEA ESI,[ESP + 0x64]                ; 00408dfe
    PUSH EAX                            ; 00408e02
    FSUB float ptr [EBX]                ; 00408e03
    FXCH ST2                            ; 00408e05
    FSUB float ptr [EBX + 0x4]          ; 00408e07
    FXCH                                ; 00408e0a
    FSUB float ptr [EBX + 0x8]          ; 00408e0c
    LEA EAX,[ESP + 0x5c]                ; 00408e0f
    FXCH ST2                            ; 00408e13
    FSTP float ptr [ESP + 0x68]         ; 00408e15
    PUSH EAX                            ; 00408e19
    FSTP float ptr [ESP + 0x70]         ; 00408e1a
    LEA EAX,[ESP + 0x14]                ; 00408e1e
    PUSH EBX                            ; 00408e22
    FSTP float ptr [ESP + 0x78]         ; 00408e23
    PUSH EAX                            ; 00408e27
    MOVSD ES:EDI,ESI                    ; 00408e28
    MOVSD ES:EDI,ESI                    ; 00408e29
    MOVSD ES:EDI,ESI                    ; 00408e2a
    CALL core_actor.cpp_FUN_00408100    ; 00408e2b
        ;   XREF to: 00408100 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408100()
    MOV dword ptr [ESP + 0x98],EAX      ; 00408e30
    FLD float ptr [ESP + 0x98]          ; 00408e37
    ADD ESP,0x10                        ; 00408e3e
    FLDZ                                ; 00408e41
    FXCH                                ; 00408e43
    FST float ptr [ESP + 0x8]           ; 00408e45
    FSTP double ptr [ESP]               ; 00408e49
    FCOMP double ptr [ESP]              ; 00408e4c
    FNSTSW AX                           ; 00408e4f
    SAHF                                ; 00408e51
    JA 0x00408de5                       ; 00408e52
        ;   XREF to: 00408de5 (CONDITIONAL_JUMP)  ; LAB_00408de5
    FLD1                                ; 00408e54
    FCOMP double ptr [ESP]              ; 00408e56
    FNSTSW AX                           ; 00408e59
    SAHF                                ; 00408e5b
    JC 0x00408de5                       ; 00408e5c
        ;   XREF to: 00408de5 (CONDITIONAL_JUMP)  ; LAB_00408de5
    CMP dword ptr [EBP + 0x20],0x0      ; 00408e5e
    JZ 0x00408ef1                       ; 00408e62
        ;   XREF to: 00408ef1 (CONDITIONAL_JUMP)  ; LAB_00408ef1
    FLD float ptr [ESP + 0x8]           ; 00408e68
    FLD float ptr [ESP + 0x58]          ; 00408e6c
    FMUL ST1                            ; 00408e70
    FLD float ptr [ESP + 0x5c]          ; 00408e72
    FMUL ST2                            ; 00408e76
    FLD float ptr [ESP + 0x60]          ; 00408e78
    FMULP ST3                           ; 00408e7c
    LEA EDI,[ESP + 0x70]                ; 00408e7e
    LEA ESI,[ESP + 0x40]                ; 00408e82
    FXCH                                ; 00408e86
    FSTP float ptr [ESP + 0x40]         ; 00408e88
    FSTP float ptr [ESP + 0x44]         ; 00408e8c
    FSTP float ptr [ESP + 0x48]         ; 00408e90
    MOVSD ES:EDI,ESI                    ; 00408e94
    MOVSD ES:EDI,ESI                    ; 00408e95
    MOVSD ES:EDI,ESI                    ; 00408e96
    FLD float ptr [EBX]                 ; 00408e97
    FLD float ptr [EBX + 0x4]           ; 00408e99
    FLD float ptr [EBX + 0x8]           ; 00408e9c
    LEA EDI,[ESP + 0x7c]                ; 00408e9f
    LEA ESI,[ESP + 0x34]                ; 00408ea3
    FXCH ST2                            ; 00408ea7
    FADD float ptr [ESP + 0x70]         ; 00408ea9
    FXCH                                ; 00408ead
    FADD float ptr [ESP + 0x74]         ; 00408eaf
    FXCH ST2                            ; 00408eb3
    FADD float ptr [ESP + 0x78]         ; 00408eb5
    FXCH                                ; 00408eb9
    FSTP float ptr [ESP + 0x34]         ; 00408ebb
    FXCH                                ; 00408ebf
    FSTP float ptr [ESP + 0x38]         ; 00408ec1
    FSTP float ptr [ESP + 0x3c]         ; 00408ec5
    MOVSD ES:EDI,ESI                    ; 00408ec9
    MOVSD ES:EDI,ESI                    ; 00408eca
    MOVSD ES:EDI,ESI                    ; 00408ecb
    LEA EAX,[ESP + 0x7c]                ; 00408ecc
    MOV EDI,dword ptr [EBP + 0x20]      ; 00408ed0
    CMP EAX,EDI                         ; 00408ed3
    JZ 0x00408ef1                       ; 00408ed5
        ;   XREF to: 00408ef1 (CONDITIONAL_JUMP)  ; LAB_00408ef1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00408ed7
    MOV dword ptr [EDI],EAX             ; 00408edb
    MOV EAX,dword ptr [ESP + 0x80]      ; 00408edd
    MOV dword ptr [EDI + 0x4],EAX       ; 00408ee4
    MOV EAX,dword ptr [ESP + 0x84]      ; 00408ee7
    MOV dword ptr [EDI + 0x8],EAX       ; 00408eee
    MOV EAX,0x1                         ; 00408ef1
        ;   Label: LAB_00408ef1
    MOV ESP,EBP                         ; 00408ef6
    POP EBP                             ; 00408ef8
    POP EDI                             ; 00408ef9
    POP ESI                             ; 00408efa
    POP EBX                             ; 00408efb
    RET                                 ; 00408efc


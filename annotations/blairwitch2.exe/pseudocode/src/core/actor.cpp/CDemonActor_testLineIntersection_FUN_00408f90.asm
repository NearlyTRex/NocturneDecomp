; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408f90(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)
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
;   core_hero.cpp_CHero_testLineIntersection_FUN_004ce540 at 004ce575
;
; Called Functions:
;   core_actor.cpp_FUN_00408290
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408f90
        ;   Label: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408f90
    PUSH ESI                            ; 00408f91
    PUSH EDI                            ; 00408f92
    PUSH EBP                            ; 00408f93
    MOV EBP,ESP                         ; 00408f94
    SUB ESP,0x8c                        ; 00408f96
    AND ESP,0xfffffff8                  ; 00408f9c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00408f9f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00408fa2
    LEA EAX,[ESP + 0xc]                 ; 00408fa5
    PUSH EAX                            ; 00408fa9
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 00408faa
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00408faf
    XOR EDX,EDX                         ; 00408fb2
    MOV dword ptr [ESP + 0xc],EDX       ; 00408fb4
    LEA EDX,[ESP + 0xc]                 ; 00408fb8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00408fbc
    PUSH EDX                            ; 00408fbf
    MOV ECX,dword ptr [EBP + 0x14]      ; 00408fc0
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00408fc3
    PUSH ECX                            ; 00408fc9
    CALL dword ptr [EAX + 0x44]         ; 00408fca
    ADD ESP,0x8                         ; 00408fcd
    CMP EAX,0x2                         ; 00408fd0
    JZ 0x00408fde                       ; 00408fd3
        ;   XREF to: 00408fde (CONDITIONAL_JUMP)  ; LAB_00408fde
    XOR EAX,EAX                         ; 00408fd5
        ;   Label: LAB_00408fd5
    MOV ESP,EBP                         ; 00408fd7
    POP EBP                             ; 00408fd9
    POP EDI                             ; 00408fda
    POP ESI                             ; 00408fdb
    POP EBX                             ; 00408fdc
    RET                                 ; 00408fdd
    FLD float ptr [ESI + 0x4]           ; 00408fde
        ;   Label: LAB_00408fde
    FLD float ptr [ESI + 0x8]           ; 00408fe1
    FLD float ptr [ESI]                 ; 00408fe4
    LEA EDI,[ESP + 0x58]                ; 00408fe6
    LEA EAX,[ESP + 0x4c]                ; 00408fea
    LEA ESI,[ESP + 0x64]                ; 00408fee
    PUSH EAX                            ; 00408ff2
    FSUB float ptr [EBX]                ; 00408ff3
    FXCH ST2                            ; 00408ff5
    FSUB float ptr [EBX + 0x4]          ; 00408ff7
    FXCH                                ; 00408ffa
    FSUB float ptr [EBX + 0x8]          ; 00408ffc
    LEA EAX,[ESP + 0x5c]                ; 00408fff
    FXCH ST2                            ; 00409003
    FSTP float ptr [ESP + 0x68]         ; 00409005
    PUSH EAX                            ; 00409009
    FSTP float ptr [ESP + 0x70]         ; 0040900a
    LEA EAX,[ESP + 0x14]                ; 0040900e
    PUSH EBX                            ; 00409012
    FSTP float ptr [ESP + 0x78]         ; 00409013
    PUSH EAX                            ; 00409017
    MOVSD ES:EDI,ESI                    ; 00409018
    MOVSD ES:EDI,ESI                    ; 00409019
    MOVSD ES:EDI,ESI                    ; 0040901a
    CALL core_actor.cpp_FUN_00408290    ; 0040901b
        ;   XREF to: 00408290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408290()
    MOV dword ptr [ESP + 0x98],EAX      ; 00409020
    FLD float ptr [ESP + 0x98]          ; 00409027
    ADD ESP,0x10                        ; 0040902e
    FLDZ                                ; 00409031
    FXCH                                ; 00409033
    FST float ptr [ESP + 0x8]           ; 00409035
    FSTP double ptr [ESP]               ; 00409039
    FCOMP double ptr [ESP]              ; 0040903c
    FNSTSW AX                           ; 0040903f
    SAHF                                ; 00409041
    JA 0x00408fd5                       ; 00409042
        ;   XREF to: 00408fd5 (CONDITIONAL_JUMP)  ; LAB_00408fd5
    FLD1                                ; 00409044
    FCOMP double ptr [ESP]              ; 00409046
    FNSTSW AX                           ; 00409049
    SAHF                                ; 0040904b
    JC 0x00408fd5                       ; 0040904c
        ;   XREF to: 00408fd5 (CONDITIONAL_JUMP)  ; LAB_00408fd5
    CMP dword ptr [EBP + 0x20],0x0      ; 0040904e
    JZ 0x004090e1                       ; 00409052
        ;   XREF to: 004090e1 (CONDITIONAL_JUMP)  ; LAB_004090e1
    FLD float ptr [ESP + 0x8]           ; 00409058
    FLD float ptr [ESP + 0x58]          ; 0040905c
    FMUL ST1                            ; 00409060
    FLD float ptr [ESP + 0x5c]          ; 00409062
    FMUL ST2                            ; 00409066
    FLD float ptr [ESP + 0x60]          ; 00409068
    FMULP ST3                           ; 0040906c
    LEA EDI,[ESP + 0x70]                ; 0040906e
    LEA ESI,[ESP + 0x40]                ; 00409072
    FXCH                                ; 00409076
    FSTP float ptr [ESP + 0x40]         ; 00409078
    FSTP float ptr [ESP + 0x44]         ; 0040907c
    FSTP float ptr [ESP + 0x48]         ; 00409080
    MOVSD ES:EDI,ESI                    ; 00409084
    MOVSD ES:EDI,ESI                    ; 00409085
    MOVSD ES:EDI,ESI                    ; 00409086
    FLD float ptr [EBX]                 ; 00409087
    FLD float ptr [EBX + 0x4]           ; 00409089
    FLD float ptr [EBX + 0x8]           ; 0040908c
    LEA EDI,[ESP + 0x7c]                ; 0040908f
    LEA ESI,[ESP + 0x34]                ; 00409093
    FXCH ST2                            ; 00409097
    FADD float ptr [ESP + 0x70]         ; 00409099
    FXCH                                ; 0040909d
    FADD float ptr [ESP + 0x74]         ; 0040909f
    FXCH ST2                            ; 004090a3
    FADD float ptr [ESP + 0x78]         ; 004090a5
    FXCH                                ; 004090a9
    FSTP float ptr [ESP + 0x34]         ; 004090ab
    FXCH                                ; 004090af
    FSTP float ptr [ESP + 0x38]         ; 004090b1
    FSTP float ptr [ESP + 0x3c]         ; 004090b5
    MOVSD ES:EDI,ESI                    ; 004090b9
    MOVSD ES:EDI,ESI                    ; 004090ba
    MOVSD ES:EDI,ESI                    ; 004090bb
    LEA EAX,[ESP + 0x7c]                ; 004090bc
    MOV EDI,dword ptr [EBP + 0x20]      ; 004090c0
    CMP EAX,EDI                         ; 004090c3
    JZ 0x004090e1                       ; 004090c5
        ;   XREF to: 004090e1 (CONDITIONAL_JUMP)  ; LAB_004090e1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004090c7
    MOV dword ptr [EDI],EAX             ; 004090cb
    MOV EAX,dword ptr [ESP + 0x80]      ; 004090cd
    MOV dword ptr [EDI + 0x4],EAX       ; 004090d4
    MOV EAX,dword ptr [ESP + 0x84]      ; 004090d7
    MOV dword ptr [EDI + 0x8],EAX       ; 004090de
    MOV EAX,0x1                         ; 004090e1
        ;   Label: LAB_004090e1
    MOV ESP,EBP                         ; 004090e6
    POP EBP                             ; 004090e8
    POP EDI                             ; 004090e9
    POP ESI                             ; 004090ea
    POP EBX                             ; 004090eb
    RET                                 ; 004090ec


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[45]:
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f66b
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 0041180c
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412e09
;   core_beast.cpp_CBeast_process_FUN_00414770 at 004147d3
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414d15
;   core_bird.cpp_CBird_process_FUN_00415340 at 004155a2
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c14c
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429866
;   core_colonel.cpp_CColonel_process_FUN_00444550 at 00444804
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 00446728
;   ... and 35 more
;
; Called Functions:
;   core_charactr.cpp_FUN_00433d50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042e160
        ;   Label: core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
    PUSH EDI                            ; 0042e161
    SUB ESP,0xc                         ; 0042e162
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042e165
    MOV EDI,ESP                         ; 0042e169
    LEA ESI,[EAX + 0x30]                ; 0042e16b
    MOV EDX,ESP                         ; 0042e16e
    MOVSD ES:EDI,ESI                    ; 0042e170
    MOVSD ES:EDI,ESI                    ; 0042e171
    MOVSD ES:EDI,ESI                    ; 0042e172
    PUSH EDX                            ; 0042e173
    FLD float ptr [ESP + 0x8]           ; 0042e174
    FADD float ptr [EAX + 0x2508]       ; 0042e178
    PUSH EAX                            ; 0042e17e
    FSTP float ptr [ESP + 0xc]          ; 0042e17f
    MOV dword ptr [EAX + 0x2508],0x0    ; 0042e183
    CALL core_charactr.cpp_FUN_00433d50 ; 0042e18d
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 0042e192
    ADD ESP,0xc                         ; 0042e195
    POP EDI                             ; 0042e198
    POP ESI                             ; 0042e199
    RET                                 ; 0042e19a


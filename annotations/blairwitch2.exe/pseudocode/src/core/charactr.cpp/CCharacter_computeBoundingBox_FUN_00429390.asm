; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 at 00429eb7
;   core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440 at 0042b4df
;   core_charactr.cpp_CCharacter_setup_FUN_00422930 at 004229ec
;   core_mimic.cpp_CMimic_process_FUN_004f08a0 at 004f092b
;
; Called Functions:
;   core_skeleton.cpp_FUN_005487d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429390
        ;   Label: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00429390
    PUSH ESI                            ; 00429391
    PUSH EDI                            ; 00429392
    SUB ESP,0x30                        ; 00429393
    MOV EBX,dword ptr [ESP + 0x40]      ; 00429396
    LEA EDX,[EBX + 0x2b4]               ; 0042939a
    LEA EAX,[EBX + 0x2514]              ; 004293a0
    CMP byte ptr [EAX],0x0              ; 004293a6
    JNZ 0x004293b2                      ; 004293a9
        ;   XREF to: 004293b2 (CONDITIONAL_JUMP)  ; LAB_004293b2
    ADD ESP,0x30                        ; 004293ab
        ;   Label: LAB_004293ab
    POP EDI                             ; 004293ae
    POP ESI                             ; 004293af
    POP EBX                             ; 004293b0
    RET                                 ; 004293b1
    PUSH EDX                            ; 004293b2
        ;   Label: LAB_004293b2
    LEA ESI,[ESP + 0x4]                 ; 004293b3
    LEA EDI,[ESP + 0x1c]                ; 004293b7
    CALL core_skeleton.cpp_FUN_005487d0 ; 004293bb
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005487d0()
    MOV ECX,0x6                         ; 004293c0
    LEA ESI,[ESP + 0x4]                 ; 004293c5
    ADD ESP,0x4                         ; 004293c9
    LEA EDX,[EBX + 0x27f4]              ; 004293cc
    MOVSD.REP ES:EDI,ESI                ; 004293d2
    LEA EBX,[ESP + 0x18]                ; 004293d4
    MOV ESI,EDX                         ; 004293d8
    CMP EDX,EBX                         ; 004293da
    JZ 0x004293f2                       ; 004293dc
        ;   XREF to: 004293f2 (CONDITIONAL_JUMP)  ; LAB_004293f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004293de
    MOV dword ptr [EDX],EAX             ; 004293e2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004293e4
    MOV dword ptr [EDX + 0x4],EAX       ; 004293e8
    MOV EAX,dword ptr [ESP + 0x20]      ; 004293eb
    MOV dword ptr [EDX + 0x8],EAX       ; 004293ef
    LEA EAX,[EBX + 0xc]                 ; 004293f2
        ;   Label: LAB_004293f2
    LEA EDX,[ESI + 0xc]                 ; 004293f5
    CMP EDX,EAX                         ; 004293f8
    JZ 0x004293ab                       ; 004293fa
        ;   XREF to: 004293ab (CONDITIONAL_JUMP)  ; LAB_004293ab
    MOV ECX,dword ptr [EAX]             ; 004293fc
    MOV dword ptr [EDX],ECX             ; 004293fe
    MOV ECX,dword ptr [EAX + 0x4]       ; 00429400
    MOV dword ptr [EDX + 0x4],ECX       ; 00429403
    MOV ECX,dword ptr [EAX + 0x8]       ; 00429406
    MOV dword ptr [EDX + 0x8],ECX       ; 00429409
    ADD ESP,0x30                        ; 0042940c
    POP EDI                             ; 0042940f
    POP ESI                             ; 00429410
    POP EBX                             ; 00429411
    RET                                 ; 00429412


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 s_..\\core\\icepick.cpp_005861b9+1
;   string s_CIcePick::getCarryObjToBodyXForm_005861ce
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baa50
        ;   Label: core_icepick.cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50
    PUSH EDI                            ; 004baa51
    PUSH EBP                            ; 004baa52
    SUB ESP,0x9c                        ; 004baa53
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004baa59
    MOV EBX,ESI                         ; 004baa60
    MOV EAX,EDX                         ; 004baa62
    SHL EAX,0x4                         ; 004baa64
    ADD EAX,EDX                         ; 004baa67
    MOV ECX,dword ptr [ESP + 0xac]      ; 004baa69
    SHL EAX,0x2                         ; 004baa70
    ADD EAX,ECX                         ; 004baa73
    MOV EDI,dword ptr [EAX + 0x24a4]    ; 004baa75
    CMP EDX,0x1                         ; 004baa7b
    JNZ 0x004bab78                      ; 004baa7e
        ;   XREF to: 004bab78 (CONDITIONAL_JUMP)  ; LAB_004bab78
    MOV EAX,0x3ee66666                  ; 004baa84
    MOV EDX,0xbe6a7efa                  ; 004baa89
    MOV ECX,0xbca3d70a                  ; 004baa8e
    LEA ESI,[ESP + 0x6c]                ; 004baa93
    MOV dword ptr [ESP + 0x90],EAX      ; 004baa97
    MOV dword ptr [ESP + 0x94],EDX      ; 004baa9e
    LEA EAX,[ESP + 0x90]                ; 004baaa5
    MOV dword ptr [ESP + 0x98],ECX      ; 004baaac
    CMP ESI,EAX                         ; 004baab3
    JNZ 0x004bab62                      ; 004baab5
        ;   XREF to: 004bab62 (CONDITIONAL_JUMP)  ; LAB_004bab62
    MOV ECX,0x3fb76c8b                  ; 004baabb
        ;   Label: LAB_004baabb
    MOV ESI,0x3f96872b                  ; 004baac0
    MOV EDX,0xbec7ae14                  ; 004baac5
    LEA EAX,[ESP + 0x78]                ; 004baaca
    MOV dword ptr [ESP + 0x80],ECX      ; 004baace
    MOV dword ptr [ESP + 0x7c],ESI      ; 004baad5
    LEA ESI,[ESP + 0x84]                ; 004baad9
    MOV dword ptr [ESP + 0x78],EDX      ; 004baae0
    CMP ESI,EAX                         ; 004baae4
    JZ 0x004bab02                       ; 004baae6
        ;   XREF to: 004bab02 (CONDITIONAL_JUMP)  ; LAB_004bab02
    MOV EAX,0x3f96872b                  ; 004baae8
    MOV dword ptr [ESP + 0x8c],ECX      ; 004baaed
    MOV dword ptr [ESP + 0x84],EDX      ; 004baaf4
    MOV dword ptr [ESP + 0x88],EAX      ; 004baafb
    LEA EAX,[ESP + 0x84]                ; 004bab02
        ;   Label: LAB_004bab02
    PUSH EAX                            ; 004bab09
    LEA EAX,[ESP + 0x70]                ; 004bab0a
    PUSH EAX                            ; 004bab0e
    LEA EAX,[ESP + 0x38]                ; 004bab0f
    PUSH EAX                            ; 004bab13
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004bab14
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    LEA EAX,[EDI*0x4 + 0x0]             ; 004bab19
    ADD ESP,0xc                         ; 004bab20
    SUB EAX,EDI                         ; 004bab23
    MOV ESI,dword ptr [ESP + 0xac]      ; 004bab25
    SHL EAX,0x4                         ; 004bab2c
    ADD ESI,0xfd0                       ; 004bab2f
    ADD EAX,ESI                         ; 004bab35
    PUSH EAX                            ; 004bab37
    LEA EAX,[ESP + 0x34]                ; 004bab38
    PUSH EAX                            ; 004bab3c
    LEA ESI,[ESP + 0x8]                 ; 004bab3d
    MOV EDI,EBX                         ; 004bab41
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004bab43
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004bab48
    LEA ESI,[ESP + 0x8]                 ; 004bab4d
    ADD ESP,0x8                         ; 004bab51
    MOVSD.REP ES:EDI,ESI                ; 004bab54
    MOV EAX,EBX                         ; 004bab56
    ADD ESP,0x9c                        ; 004bab58
    POP EBP                             ; 004bab5e
    POP EDI                             ; 004bab5f
    POP EBX                             ; 004bab60
    RET                                 ; 004bab61
    MOV ESI,0x3ee66666                  ; 004bab62
        ;   Label: LAB_004bab62
    MOV dword ptr [ESP + 0x70],EDX      ; 004bab67
    MOV dword ptr [ESP + 0x74],ECX      ; 004bab6b
    MOV dword ptr [ESP + 0x6c],ESI      ; 004bab6f
    JMP 0x004baabb                      ; 004bab73
        ;   XREF to: 004baabb (UNCONDITIONAL_JUMP)  ; LAB_004baabb
    MOV ESI,0x5861ba                    ; 004bab78 | s_..\core\icepick.cpp_005861b9+1
        ;   Label: LAB_004bab78
    MOV EBP,0x28a                       ; 004bab7d
    PUSH 0x5861ce                       ; 004bab82 | = "CIcePick::getCarryObjToBodyXForm - wr..."
    MOV dword ptr [0x01cc4800],ESI      ; 004bab87 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004bab8d | DAT_01cc4804
    CALL FUN_004c8440                   ; 004bab93
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004bab98
    JMP 0x004bab02                      ; 004bab9b
        ;   XREF to: 004bab02 (UNCONDITIONAL_JUMP)  ; LAB_004bab02


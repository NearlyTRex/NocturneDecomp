; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910(int param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004421b0 at 004422e1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447910
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
    PUSH EDI                            ; 00447911
    PUSH EBP                            ; 00447912
    SUB ESP,0x20                        ; 00447913
    MOV EDI,dword ptr [ESP + 0x30]      ; 00447916
    MOV ECX,dword ptr [ESP + 0x34]      ; 0044791a
    MOV EBP,ESI                         ; 0044791e
    MOV EAX,dword ptr [ECX + 0x8]       ; 00447920
    MOV EDX,dword ptr [EDI + 0x1c8]     ; 00447923
    MOV dword ptr [ESP + 0x8],EAX       ; 00447929
    MOV EAX,dword ptr [ECX]             ; 0044792d
    MOV EBX,dword ptr [EDI + 0x1c0]     ; 0044792f
    SUB EAX,EDX                         ; 00447935
    MOV EDX,dword ptr [ESP + 0x8]       ; 00447937
    IMUL EDX                            ; 0044793b
    IDIV EBX                            ; 0044793d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044793f
    MOV ESI,EAX                         ; 00447943
    MOV dword ptr [ESP],EAX             ; 00447945
    MOV EAX,dword ptr [ECX + 0x4]       ; 00447948
    MOV ECX,dword ptr [EDI + 0x1cc]     ; 0044794b
    MOV EBX,dword ptr [EDI + 0x1c4]     ; 00447951
    SUB EAX,ECX                         ; 00447957
    MOV ECX,dword ptr [ESP + 0x38]      ; 00447959
    IMUL EDX                            ; 0044795d
    IDIV EBX                            ; 0044795f
    SHL ECX,0x2                         ; 00447961
    MOV EBX,EAX                         ; 00447964
    ADD ECX,EDI                         ; 00447966
    MOV dword ptr [ESP + 0x4],EAX       ; 00447968
    MOV EDX,ESI                         ; 0044796c
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044796e
    IMUL EDX                            ; 00447974
    SHRD EAX,EDX,0x10                   ; 00447976
    MOV dword ptr [ESP + 0x18],EAX      ; 0044797a
    MOV EDX,EBX                         ; 0044797e
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 00447980
    IMUL EDX                            ; 00447986
    SHRD EAX,EDX,0x10                   ; 00447988
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044798c
    ADD EDX,EAX                         ; 00447990
    MOV dword ptr [ESP + 0x18],EDX      ; 00447992
    MOV EAX,dword ptr [ECX + 0x142c]    ; 00447996
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044799c
    IMUL EDX                            ; 004479a0
    SHRD EAX,EDX,0x10                   ; 004479a2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004479a6
    ADD EDX,EAX                         ; 004479aa
    MOV EAX,dword ptr [ESP + 0x38]      ; 004479ac
    MOV dword ptr [ESP + 0x18],EAX      ; 004479b0
    MOV dword ptr [ESP + 0x1c],EDX      ; 004479b4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004479b8
    SHL EAX,0x2                         ; 004479bc
    SUB EAX,EDX                         ; 004479bf
    SHL EAX,0x2                         ; 004479c1
    ADD EDI,EAX                         ; 004479c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004479c6
    MOV EDX,dword ptr [EDI + 0x11ec]    ; 004479ca
    ADD EAX,EDX                         ; 004479d0
    MOV dword ptr [ESP + 0xc],EAX       ; 004479d2
    MOV EDX,ESI                         ; 004479d6
    MOV EAX,dword ptr [ECX + 0x138c]    ; 004479d8
    IMUL EDX                            ; 004479de
    SHRD EAX,EDX,0x10                   ; 004479e0
    MOV dword ptr [ESP + 0x18],EAX      ; 004479e4
    MOV EDX,EBX                         ; 004479e8
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 004479ea
    IMUL EDX                            ; 004479f0
    SHRD EAX,EDX,0x10                   ; 004479f2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004479f6
    ADD EDX,EAX                         ; 004479fa
    MOV dword ptr [ESP + 0x18],EDX      ; 004479fc
    MOV EAX,dword ptr [ECX + 0x144c]    ; 00447a00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00447a06
    IMUL EDX                            ; 00447a0a
    SHRD EAX,EDX,0x10                   ; 00447a0c
    ADD EAX,dword ptr [ESP + 0x18]      ; 00447a10
    MOV EDX,dword ptr [EDI + 0x11f0]    ; 00447a14
    ADD EDX,EAX                         ; 00447a1a
    MOV dword ptr [ESP + 0x10],EDX      ; 00447a1c
    MOV EDX,ESI                         ; 00447a20
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 00447a22
    IMUL EDX                            ; 00447a28
    SHRD EAX,EDX,0x10                   ; 00447a2a
    MOV ESI,EAX                         ; 00447a2e
    MOV EDX,EBX                         ; 00447a30
    MOV EAX,dword ptr [ECX + 0x140c]    ; 00447a32
    IMUL EDX                            ; 00447a38
    SHRD EAX,EDX,0x10                   ; 00447a3a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00447a3e
    ADD ESI,EAX                         ; 00447a42
    MOV EAX,dword ptr [ECX + 0x146c]    ; 00447a44
    IMUL EDX                            ; 00447a4a
    SHRD EAX,EDX,0x10                   ; 00447a4c
    MOV EDX,dword ptr [EDI + 0x11f4]    ; 00447a50
    ADD EAX,ESI                         ; 00447a56
    LEA ESI,[ESP + 0xc]                 ; 00447a58
    ADD EDX,EAX                         ; 00447a5c
    MOV EDI,EBP                         ; 00447a5e
    MOV dword ptr [ESP + 0x14],EDX      ; 00447a60
    MOVSD ES:EDI,ESI                    ; 00447a64
    MOVSD ES:EDI,ESI                    ; 00447a65
    MOVSD ES:EDI,ESI                    ; 00447a66
    MOV EAX,EBP                         ; 00447a67
    ADD ESP,0x20                        ; 00447a69
    POP EBP                             ; 00447a6c
    POP EDI                             ; 00447a6d
    POP EBX                             ; 00447a6e
    RET                                 ; 00447a6f


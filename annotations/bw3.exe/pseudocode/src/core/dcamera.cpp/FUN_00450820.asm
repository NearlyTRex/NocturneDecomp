; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00450820(int param_1,int *param_2,int param_3)
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
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070 at 0044b19e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450820
        ;   Label: core_dcamera.cpp_FUN_00450820
    PUSH EDI                            ; 00450821
    PUSH EBP                            ; 00450822
    SUB ESP,0x20                        ; 00450823
    MOV EDI,dword ptr [ESP + 0x30]      ; 00450826
    MOV ECX,dword ptr [ESP + 0x34]      ; 0045082a
    MOV EBP,ESI                         ; 0045082e
    MOV EAX,dword ptr [ECX + 0x8]       ; 00450830
    MOV EDX,dword ptr [EDI + 0x1c8]     ; 00450833
    MOV dword ptr [ESP + 0x8],EAX       ; 00450839
    MOV EAX,dword ptr [ECX]             ; 0045083d
    MOV EBX,dword ptr [EDI + 0x1c0]     ; 0045083f
    SUB EAX,EDX                         ; 00450845
    MOV EDX,dword ptr [ESP + 0x8]       ; 00450847
    IMUL EDX                            ; 0045084b
    IDIV EBX                            ; 0045084d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045084f
    MOV ESI,EAX                         ; 00450853
    MOV dword ptr [ESP],EAX             ; 00450855
    MOV EAX,dword ptr [ECX + 0x4]       ; 00450858
    MOV ECX,dword ptr [EDI + 0x1cc]     ; 0045085b
    MOV EBX,dword ptr [EDI + 0x1c4]     ; 00450861
    SUB EAX,ECX                         ; 00450867
    MOV ECX,dword ptr [ESP + 0x38]      ; 00450869
    IMUL EDX                            ; 0045086d
    IDIV EBX                            ; 0045086f
    SHL ECX,0x2                         ; 00450871
    MOV EBX,EAX                         ; 00450874
    ADD ECX,EDI                         ; 00450876
    MOV dword ptr [ESP + 0x4],EAX       ; 00450878
    MOV EDX,ESI                         ; 0045087c
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0045087e
    IMUL EDX                            ; 00450884
    SHRD EAX,EDX,0x10                   ; 00450886
    MOV dword ptr [ESP + 0x18],EAX      ; 0045088a
    MOV EDX,EBX                         ; 0045088e
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 00450890
    IMUL EDX                            ; 00450896
    SHRD EAX,EDX,0x10                   ; 00450898
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045089c
    ADD EDX,EAX                         ; 004508a0
    MOV dword ptr [ESP + 0x18],EDX      ; 004508a2
    MOV EAX,dword ptr [ECX + 0x142c]    ; 004508a6
    MOV EDX,dword ptr [ESP + 0x8]       ; 004508ac
    IMUL EDX                            ; 004508b0
    SHRD EAX,EDX,0x10                   ; 004508b2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004508b6
    ADD EDX,EAX                         ; 004508ba
    MOV EAX,dword ptr [ESP + 0x38]      ; 004508bc
    MOV dword ptr [ESP + 0x18],EAX      ; 004508c0
    MOV dword ptr [ESP + 0x1c],EDX      ; 004508c4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004508c8
    SHL EAX,0x2                         ; 004508cc
    SUB EAX,EDX                         ; 004508cf
    SHL EAX,0x2                         ; 004508d1
    ADD EDI,EAX                         ; 004508d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004508d6
    MOV EDX,dword ptr [EDI + 0x11ec]    ; 004508da
    ADD EAX,EDX                         ; 004508e0
    MOV dword ptr [ESP + 0xc],EAX       ; 004508e2
    MOV EDX,ESI                         ; 004508e6
    MOV EAX,dword ptr [ECX + 0x138c]    ; 004508e8
    IMUL EDX                            ; 004508ee
    SHRD EAX,EDX,0x10                   ; 004508f0
    MOV dword ptr [ESP + 0x18],EAX      ; 004508f4
    MOV EDX,EBX                         ; 004508f8
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 004508fa
    IMUL EDX                            ; 00450900
    SHRD EAX,EDX,0x10                   ; 00450902
    MOV EDX,dword ptr [ESP + 0x18]      ; 00450906
    ADD EDX,EAX                         ; 0045090a
    MOV dword ptr [ESP + 0x18],EDX      ; 0045090c
    MOV EAX,dword ptr [ECX + 0x144c]    ; 00450910
    MOV EDX,dword ptr [ESP + 0x8]       ; 00450916
    IMUL EDX                            ; 0045091a
    SHRD EAX,EDX,0x10                   ; 0045091c
    ADD EAX,dword ptr [ESP + 0x18]      ; 00450920
    MOV EDX,dword ptr [EDI + 0x11f0]    ; 00450924
    ADD EDX,EAX                         ; 0045092a
    MOV dword ptr [ESP + 0x10],EDX      ; 0045092c
    MOV EDX,ESI                         ; 00450930
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 00450932
    IMUL EDX                            ; 00450938
    SHRD EAX,EDX,0x10                   ; 0045093a
    MOV ESI,EAX                         ; 0045093e
    MOV EDX,EBX                         ; 00450940
    MOV EAX,dword ptr [ECX + 0x140c]    ; 00450942
    IMUL EDX                            ; 00450948
    SHRD EAX,EDX,0x10                   ; 0045094a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045094e
    ADD ESI,EAX                         ; 00450952
    MOV EAX,dword ptr [ECX + 0x146c]    ; 00450954
    IMUL EDX                            ; 0045095a
    SHRD EAX,EDX,0x10                   ; 0045095c
    MOV EDX,dword ptr [EDI + 0x11f4]    ; 00450960
    ADD EAX,ESI                         ; 00450966
    LEA ESI,[ESP + 0xc]                 ; 00450968
    ADD EDX,EAX                         ; 0045096c
    MOV EDI,EBP                         ; 0045096e
    MOV dword ptr [ESP + 0x14],EDX      ; 00450970
    MOVSD ES:EDI,ESI                    ; 00450974
    MOVSD ES:EDI,ESI                    ; 00450975
    MOVSD ES:EDI,ESI                    ; 00450976
    MOV EAX,EBP                         ; 00450977
    ADD ESP,0x20                        ; 00450979
    POP EBP                             ; 0045097c
    POP EDI                             ; 0045097d
    POP EBX                             ; 0045097e
    RET                                 ; 0045097f


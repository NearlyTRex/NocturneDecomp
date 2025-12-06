; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0(int scanline_y, int x_start, int x_end)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   CVector3i[320] g_TempWorldPositionRow
;   CVector3f[76800] g_PrecomputedSurfaceNormals
;   char[241][320] g_CoronaBlurOutputBuffer
;   int g_CoronaMaxDepth
;   int g_CoronaDepthShift
;   CDemonLight* g_CurrentLightForCorona
;   undefined4 g_CoronaCameraRotationMatrix.m[0].z
;   undefined4 g_CoronaCameraRotationMatrix.m[1].z
;   undefined4 g_CoronaCameraRotationMatrix.m[2].z
;   int g_CameraDownscaleIterations
;   int[240][320] g_CoronaDepthBuffer
;   uint*[1024] g_ZBufferScanlineArray
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004507a0
        ;   Label: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
    PUSH ESI                            ; 004507a1
    PUSH EDI                            ; 004507a2
    PUSH EBP                            ; 004507a3
    MOV EBP,ESP                         ; 004507a4
    SUB ESP,0x2c                        ; 004507a6
    AND ESP,0xfffffff8                  ; 004507a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004507ac
    MOV EAX,EDI                         ; 004507af
    SHL EAX,0x8                         ; 004507b1
    MOV ECX,0x9e4e74                    ; 004507b4 | CVector3i[320] g_TempWorldPositionRow
    MOV ESI,EAX                         ; 004507b9
    MOV EDX,dword ptr [EBP + 0x18]      ; 004507bb
    SHL ESI,0x4                         ; 004507be
    LEA EBX,[EDX*0x4 + 0x0]             ; 004507c1
    SUB ESI,EAX                         ; 004507c8
    LEA EAX,[EDI*0x4 + 0x0]             ; 004507ca
    SUB EBX,EDX                         ; 004507d1
    ADD EAX,EDI                         ; 004507d3
    SHL EBX,0x2                         ; 004507d5
    SHL EAX,0x6                         ; 004507d8
    ADD ECX,ESI                         ; 004507db
    ADD EAX,0xba8c78                    ; 004507dd | char[241][320] g_CoronaBlurOutputBuffer
    ADD ECX,EBX                         ; 004507e2
    ADD EDX,EAX                         ; 004507e4
    LEA EAX,[EDI*0x4 + 0x0]             ; 004507e6
    MOV dword ptr [ESP + 0x28],EDX      ; 004507ed
    ADD EAX,EDI                         ; 004507f1
    MOV EDX,dword ptr [EBP + 0x18]      ; 004507f3
    SHL EAX,0x8                         ; 004507f6
    SHL EDX,0x2                         ; 004507f9
    ADD EAX,0x1577728                   ; 004507fc | int[240][320] g_CoronaDepthBuffer
    MOV dword ptr [ESP + 0x1c],ECX      ; 00450801
    ADD EAX,EDX                         ; 00450805
    MOV CL,byte ptr [0x013bc260]        ; 00450807 | int g_CameraDownscaleIterations
    MOV dword ptr [ESP + 0x24],EAX      ; 0045080d
    MOV EDX,EDI                         ; 00450811
    MOV EAX,dword ptr [EBP + 0x18]      ; 00450813
    SHL EDX,CL                          ; 00450816
    SHL EAX,CL                          ; 00450818
    MOV EDX,dword ptr [EDX*0x4 + 0x2cf7d5c] ; 0045081a | uint *[1024] g_ZBufferScanlineArray
    SHL EAX,0x2                         ; 00450821
    ADD ESI,0xac6d74                    ; 00450824 | CVector3f[76800] g_PrecomputedSurfaceNormals
    ADD EDX,EAX                         ; 0045082a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045082c
    MOV dword ptr [ESP + 0x20],EDX      ; 0045082f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00450833
    ADD EBX,ESI                         ; 00450836
    CMP EAX,EDX                         ; 00450838
    JGE 0x0045099c                      ; 0045083a | LAB_0045099c
        ;   XREF to: 0045099c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x24]      ; 00450840
        ;   Label: LAB_00450840
    MOV EAX,dword ptr [ESP + 0x20]      ; 00450844
    MOV ESI,dword ptr [EDX]             ; 00450848
    CMP ESI,dword ptr [EAX]             ; 0045084a
    JBE 0x0045094e                      ; 0045084c | LAB_0045094e
        ;   XREF to: 0045094e (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x4]           ; 00450852
    FMUL float ptr [0x013bc24c]         ; 00450855 | g_CoronaCameraRotationMatrix.m[1].z
    FLD float ptr [EBX]                 ; 0045085b
    FMUL float ptr [0x013bc240]         ; 0045085d | g_CoronaCameraRotationMatrix.m[0].z
    FADDP                               ; 00450863
    FLD float ptr [EBX + 0x8]           ; 00450865
    FMUL float ptr [0x013bc258]         ; 00450868 | g_CoronaCameraRotationMatrix.m[2].z
    FADDP                               ; 0045086e
    FLDZ                                ; 00450870
    FCOMPP                              ; 00450872
    FNSTSW AX                           ; 00450874
    SAHF                                ; 00450876
    JA 0x0045094e                       ; 00450877 | LAB_0045094e
        ;   XREF to: 0045094e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045087d
    PUSH EDI                            ; 00450881
    MOV EAX,[0x013bc234]                ; 00450882 | CDemonLight * g_CurrentLightForCorona
    PUSH EAX                            ; 00450887
    LEA ESI,[ESP + 0x14]                ; 00450888
    LEA EDI,[ESP + 0x8]                 ; 0045088c
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 ; 00450890 | CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
        ;   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x14]                ; 00450895
    ADD ESP,0x8                         ; 00450899
    MOVSD ES:EDI,ESI                    ; 0045089c
    MOVSD ES:EDI,ESI                    ; 0045089d
    MOVSD ES:EDI,ESI                    ; 0045089e
    CMP dword ptr [ESP + 0x8],0x0       ; 0045089f
    JLE 0x0045094e                      ; 004508a4 | LAB_0045094e
        ;   XREF to: 0045094e (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x4]       ; 004508aa
    MOV EAX,[0x013bc234]                ; 004508ae | CDemonLight * g_CurrentLightForCorona
    SAR ESI,0x10                        ; 004508b3
    IMUL ESI,dword ptr [EAX + 0x1cc0]   ; 004508b6
    MOV EDX,dword ptr [ESP]             ; 004508bd
    SAR EDX,0x10                        ; 004508c0
    ADD EDX,ESI                         ; 004508c3
    MOV ESI,dword ptr [EAX + 0x2f94]    ; 004508c5
    MOV DX,word ptr [ESI + EDX*0x2]     ; 004508cb
    MOV ESI,dword ptr [0x00c1a1fc]      ; 004508cf | int g_CoronaMaxDepth
    AND EDX,0xffff                      ; 004508d5
    CMP EDX,ESI                         ; 004508db
    JGE 0x0045094e                      ; 004508dd | LAB_0045094e
        ;   XREF to: 0045094e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x8]       ; 004508df
    LEA ESI,[EDX + 0x80]                ; 004508e3
    CMP ESI,EDI                         ; 004508e9
    JLE 0x0045094e                      ; 004508eb | LAB_0045094e
        ;   XREF to: 0045094e (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP]             ; 004508ed
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 004508f0
    SAR ESI,CL                          ; 004508f6
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 004508f8
    AND ECX,ESI                         ; 004508fe
    MOV ESI,dword ptr [ESP + 0x4]       ; 00450900
    MOV dword ptr [ESP + 0x18],ECX      ; 00450904
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 00450908
    SAR ESI,CL                          ; 0045090e
    AND ESI,dword ptr [EAX + 0x1c68]    ; 00450910
    MOV CL,byte ptr [EAX + 0x1c60]      ; 00450916
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045091c
    SHL ESI,CL                          ; 00450920
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00450922
    ADD ESI,EDI                         ; 00450928
    MOVZX ESI,byte ptr [ESI + EAX*0x1]  ; 0045092a
    MOV EAX,[0x00c1a1fc]                ; 0045092e | int g_CoronaMaxDepth
    SUB EAX,EDX                         ; 00450933
    MOV EDX,EAX                         ; 00450935
    IMUL EDX,ESI                        ; 00450937
    MOV CL,byte ptr [0x00c1a200]        ; 0045093a | int g_CoronaDepthShift
    SAR EDX,CL                          ; 00450940
    MOV ECX,dword ptr [ESP + 0x28]      ; 00450942
    XOR EAX,EAX                         ; 00450946
    MOV AL,byte ptr [ECX]               ; 00450948
    ADD EAX,EDX                         ; 0045094a
    MOV byte ptr [ECX],AL               ; 0045094c
    MOV EAX,0x1                         ; 0045094e
        ;   Label: LAB_0045094e
    MOV ESI,dword ptr [ESP + 0x24]      ; 00450953
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00450957
    MOV EDX,dword ptr [EBP + 0x18]      ; 0045095b
    MOV CL,byte ptr [0x013bc260]        ; 0045095e | int g_CameraDownscaleIterations
    ADD EBX,0xc                         ; 00450964
    ADD ESI,0x4                         ; 00450967
    ADD EDI,0xc                         ; 0045096a
    INC EDX                             ; 0045096d
    SHL EAX,CL                          ; 0045096e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00450970
    SHL EAX,0x2                         ; 00450974
    MOV dword ptr [ESP + 0x24],ESI      ; 00450977
    MOV dword ptr [ESP + 0x1c],EDI      ; 0045097b
    MOV dword ptr [EBP + 0x18],EDX      ; 0045097f
    ADD ECX,EAX                         ; 00450982
    MOV EAX,dword ptr [ESP + 0x28]      ; 00450984
    MOV dword ptr [ESP + 0x20],ECX      ; 00450988
    INC EAX                             ; 0045098c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0045098d
    MOV dword ptr [ESP + 0x28],EAX      ; 00450990
    CMP EDX,ECX                         ; 00450994
    JL 0x00450840                       ; 00450996 | LAB_00450840
        ;   XREF to: 00450840 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0045099c
        ;   Label: LAB_0045099c
    POP EBP                             ; 0045099e
    POP EDI                             ; 0045099f
    POP ESI                             ; 004509a0
    POP EBX                             ; 004509a1
    RET                                 ; 004509a2


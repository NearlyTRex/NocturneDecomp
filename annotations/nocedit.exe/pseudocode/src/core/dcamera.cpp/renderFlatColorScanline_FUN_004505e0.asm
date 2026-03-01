; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
; Parameters:
; SSoftwareEdge *  Stack[0x4]:4   left_edge
; SSoftwareEdge *  Stack[0x8]:4   right_edge
; int              Stack[0xc]:4   scanline_y
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 at 005707f2
;
; Referenced Globals:
;   _BIT_INTEGER32 g_CameraDownscaleIterations
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   SFogImagePlane[16] g_CameraImageDecompressBuffer
;   undefined4 DAT_013fff78
;   int g_ImageBytesPerPixel
;   int g_FlatShadingLightLevel
;   uint*[1200] g_ZBufferScanlineArray
;   int g_ClipLeft
;   int g_ClipTop
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004505e0
        ;   Label: core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0
    PUSH ESI                            ; 004505e1
    PUSH EDI                            ; 004505e2
    PUSH EBP                            ; 004505e3
    SUB ESP,0x18                        ; 004505e4
    MOV ESI,dword ptr [0x01519380]      ; 004505e7 | g_ImageBytesPerPixel
    MOV EBP,dword ptr [ESP + 0x30]      ; 004505ed
    MOV EDX,dword ptr [ESP + 0x34]      ; 004505f1
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004505f5
    SUB ECX,dword ptr [0x02d0255c]      ; 004505f9 | g_ClipTop
    MOV EBX,dword ptr [0x013bc260]      ; 004505ff | g_CameraDownscaleIterations
    MOV dword ptr [ESP + 0x2c],ECX      ; 00450605
    CMP EBX,0x1                         ; 00450609
    JNZ 0x00450619                      ; 0045060c
        ;   XREF to: 00450619 (CONDITIONAL_JUMP)  ; LAB_00450619
    TEST byte ptr [ESP + 0x2c],0x1      ; 0045060e
    JNZ 0x0045078b                      ; 00450613
        ;   XREF to: 0045078b (CONDITIONAL_JUMP)  ; LAB_0045078b
    CMP dword ptr [0x013bc260],0x2      ; 00450619 | g_CameraDownscaleIterations
        ;   Label: LAB_00450619
    JNZ 0x0045062d                      ; 00450620
        ;   XREF to: 0045062d (CONDITIONAL_JUMP)  ; LAB_0045062d
    TEST byte ptr [ESP + 0x2c],0x3      ; 00450622
    JNZ 0x0045078b                      ; 00450627
        ;   XREF to: 0045078b (CONDITIONAL_JUMP)  ; LAB_0045078b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0045062d
        ;   Label: LAB_0045062d
    MOV EAX,[0x02d02558]                ; 00450630 | g_ClipLeft
    SAR EDI,0x10                        ; 00450635
    SUB EDI,EAX                         ; 00450638
    MOV EAX,dword ptr [EDX + 0x8]       ; 0045063a
    MOV ECX,dword ptr [0x02d02558]      ; 0045063d | g_ClipLeft
    SAR EAX,0x10                        ; 00450643
    SUB EAX,ECX                         ; 00450646
    MOV dword ptr [ESP + 0x10],EAX      ; 00450648
    CMP EDI,EAX                         ; 0045064c
    JLE 0x00450660                      ; 0045064e
        ;   XREF to: 00450660 (CONDITIONAL_JUMP)  ; LAB_00450660
    MOV EAX,EDI                         ; 00450650
    MOV EDI,dword ptr [ESP + 0x10]      ; 00450652
    MOV dword ptr [ESP + 0x10],EAX      ; 00450656
    MOV EAX,EBP                         ; 0045065a
    MOV EBP,EDX                         ; 0045065c
    MOV EDX,EAX                         ; 0045065e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00450660
        ;   Label: LAB_00450660
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00450664
    LEA ECX,[EDI*0x4 + 0x0]             ; 00450668
    MOV EBP,dword ptr [EBP + 0x28]      ; 0045066f
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c] ; 00450672 | g_ZBufferScanlineArray
    MOV EDX,dword ptr [EDX + 0x28]      ; 00450679
    ADD EAX,ECX                         ; 0045067c
    MOV CL,byte ptr [0x013bc260]        ; 0045067e | g_CameraDownscaleIterations
    MOV dword ptr [ESP + 0x14],EAX      ; 00450684
    MOV EAX,dword ptr [ESP + 0x10]      ; 00450688
    SUB EDX,EBP                         ; 0045068c
    SAR EAX,CL                          ; 0045068e
    SAR EDI,CL                          ; 00450690
    MOV dword ptr [ESP + 0x10],EAX      ; 00450692
    SUB EAX,EDI                         ; 00450696
    SAR EBX,CL                          ; 00450698
    LEA ECX,[EAX + 0x1]                 ; 0045069a
    MOV EAX,EDX                         ; 0045069d
    SAR EDX,0x1f                        ; 0045069f
    IDIV ECX                            ; 004506a2
    MOV dword ptr [ESP + 0xc],EAX       ; 004506a4
    MOV EAX,[0x015c2ea8]                ; 004506a8 | g_FlatShadingLightLevel
    MOV EDX,EAX                         ; 004506ad
    SAR EDX,0x1f                        ; 004506af
    SHL EDX,0x8                         ; 004506b2
    SBB EAX,EDX                         ; 004506b5
    SAR EAX,0x8                         ; 004506b7
    MOV dword ptr [ESP + 0x2c],EBX      ; 004506ba
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004506be
    MOV BL,AL                           ; 004506c2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004506c4
    ADD EAX,EDX                         ; 004506cb
    SHL EAX,0x6                         ; 004506cd
    CMP ESI,0x1                         ; 004506d0
    JLE 0x0045073f                      ; 004506d3
        ;   XREF to: 0045073f (CONDITIONAL_JUMP)  ; LAB_0045073f
    MOV EDX,0x1                         ; 004506d5
    MOV CL,byte ptr [0x013bc260]        ; 004506da | g_CameraDownscaleIterations
    SHL EDX,CL                          ; 004506e0
    LEA ECX,[EDX*0x4 + 0x0]             ; 004506e2
    MOV dword ptr [ESP + 0x4],EAX       ; 004506e9
    MOV dword ptr [ESP + 0x8],ECX       ; 004506ed
    XOR ECX,ECX                         ; 004506f1
    CMP EDI,dword ptr [ESP + 0x10]      ; 004506f3
        ;   Label: LAB_004506f3
    JGE 0x0045078b                      ; 004506f7
        ;   XREF to: 0045078b (CONDITIONAL_JUMP)  ; LAB_0045078b
    MOV EAX,EBP                         ; 004506fd
    MOV EDX,dword ptr [ESP + 0x14]      ; 004506ff
    SAR EAX,0x8                         ; 00450703
    CMP EAX,dword ptr [EDX]             ; 00450706
    JA 0x00450721                       ; 00450708
        ;   XREF to: 00450721 (CONDITIONAL_JUMP)  ; LAB_00450721
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045070a
        ;   Label: LAB_0045070a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045070e
    INC EDI                             ; 00450712
    ADD EDX,EAX                         ; 00450713
    MOV EAX,dword ptr [ESP + 0xc]       ; 00450715
    MOV dword ptr [ESP + 0x14],EDX      ; 00450719
    ADD EBP,EAX                         ; 0045071d
    JMP 0x004506f3                      ; 0045071f
        ;   XREF to: 004506f3 (UNCONDITIONAL_JUMP)  ; LAB_004506f3
    MOV EDX,ECX                         ; 00450721
        ;   Label: LAB_00450721
    TEST ESI,ESI                        ; 00450723
    JLE 0x0045070a                      ; 00450725
        ;   XREF to: 0045070a (CONDITIONAL_JUMP)  ; LAB_0045070a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00450727
    ADD EAX,EDI                         ; 0045072b
    ADD EAX,0x12c00                     ; 0045072d
        ;   Label: LAB_0045072d
    INC EDX                             ; 00450732
    MOV byte ptr [EAX + 0x13da778],BL   ; 00450733 | g_CameraPlaneWorkBuffer | g_CameraImageDecompressBuffer | DAT_013fff78
    CMP EDX,ESI                         ; 00450739
    JL 0x0045072d                       ; 0045073b
        ;   XREF to: 0045072d (CONDITIONAL_JUMP)  ; LAB_0045072d
    JMP 0x0045070a                      ; 0045073d
        ;   XREF to: 0045070a (UNCONDITIONAL_JUMP)  ; LAB_0045070a
    ADD EAX,0x13da778                   ; 0045073f | g_CameraPlaneWorkBuffer
        ;   Label: LAB_0045073f
    MOV EDX,dword ptr [ESP + 0x10]      ; 00450744
    ADD EAX,EDI                         ; 00450748
    CMP EDI,EDX                         ; 0045074a
    JGE 0x0045078b                      ; 0045074c
        ;   XREF to: 0045078b (CONDITIONAL_JUMP)  ; LAB_0045078b
    MOV EDX,EBP                         ; 0045074e
        ;   Label: LAB_0045074e
    SAR EDX,0x8                         ; 00450750
    MOV dword ptr [ESP],EDX             ; 00450753
    MOV EDX,dword ptr [ESP + 0x14]      ; 00450756
    MOV ECX,dword ptr [ESP]             ; 0045075a
    CMP ECX,dword ptr [EDX]             ; 0045075d
    JA 0x00450799                       ; 0045075f
        ;   XREF to: 00450799 (CONDITIONAL_JUMP)  ; LAB_00450799
    MOV ECX,dword ptr [ESP + 0xc]       ; 00450761
        ;   Label: LAB_00450761
    MOV EDX,0x1                         ; 00450765
    ADD EBP,ECX                         ; 0045076a
    MOV CL,byte ptr [0x013bc260]        ; 0045076c | g_CameraDownscaleIterations
    INC EDI                             ; 00450772
    SHL EDX,CL                          ; 00450773
    MOV ECX,dword ptr [ESP + 0x14]      ; 00450775
    SHL EDX,0x2                         ; 00450779
    INC EAX                             ; 0045077c
    ADD ECX,EDX                         ; 0045077d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045077f
    MOV dword ptr [ESP + 0x14],ECX      ; 00450783
    CMP EDI,EDX                         ; 00450787
    JL 0x0045074e                       ; 00450789
        ;   XREF to: 0045074e (CONDITIONAL_JUMP)  ; LAB_0045074e
    MOV dword ptr [0x01519380],ESI      ; 0045078b | g_ImageBytesPerPixel
        ;   Label: LAB_0045078b
    ADD ESP,0x18                        ; 00450791
        ;   Label: LAB_00450791
    POP EBP                             ; 00450794
    POP EDI                             ; 00450795
    POP ESI                             ; 00450796
    POP EBX                             ; 00450797
    RET                                 ; 00450798
    MOV byte ptr [EAX],BL               ; 00450799
        ;   Label: LAB_00450799
    JMP 0x00450761                      ; 0045079b
        ;   XREF to: 00450761 (UNCONDITIONAL_JUMP)  ; LAB_00450761


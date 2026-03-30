; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; SProjectedVertex * Stack[0xc]:4   projected_vertex
; Local Variables:
; CVector3i        Stack[-0x10]:12  local_10
;
; XREF[2]:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 at 00420638
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c90b
;
; Referenced Globals:
;   float g_CameraFixedPointScale_0065c63c = 256
;   int g_FogColorIndexR = 0x40
;   int g_FogColorIndexG = 0x40
;   int g_FogColorIndexB = 0x40
;   int g_BitsPerPixel = 0x8
;   undefined4 g_LightmapTexturePalette[64]
;   int g_BackgroundSceneDepth
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_PerspectiveReciprocal
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004537d0
        ;   Label: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
    SUB ESP,0xc                         ; 004537d1
    MOV ECX,dword ptr [ESP + 0x14]      ; 004537d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004537d8
    TEST EAX,EAX                        ; 004537dc
    JZ 0x004537f6                       ; 004537de
        ;   XREF to: 004537f6 (CONDITIONAL_JUMP)  ; LAB_004537f6
    CMP dword ptr [0x0151abb0],0x0      ; 004537e0 | g_BackgroundSceneDepth
    JZ 0x00453800                       ; 004537e7
        ;   XREF to: 00453800 (CONDITIONAL_JUMP)  ; LAB_00453800
    XOR EBP,EBP                         ; 004537e9
    MOV dword ptr [0x02d051f4],EBP      ; 004537eb | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004537f1
    POP EBP                             ; 004537f4
    RET                                 ; 004537f5
    MOV [0x02d051f4],EAX                ; 004537f6 | g_PerspectiveReciprocal
        ;   Label: LAB_004537f6
    ADD ESP,0xc                         ; 004537fb
    POP EBP                             ; 004537fe
    RET                                 ; 004537ff
    PUSH EDI                            ; 00453800
        ;   Label: LAB_00453800
    PUSH ESI                            ; 00453801
    PUSH EBX                            ; 00453802
    LEA EBX,[ESP + 0xc]                 ; 00453803
    FLD float ptr [EAX]                 ; 00453807
    FMUL float ptr [0x0065c63c]         ; 00453809 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 0045380f
    FLD float ptr [EAX + 0x4]           ; 00453811
    FMUL float ptr [0x0065c63c]         ; 00453814 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 0045381a
    FLD float ptr [EAX + 0x8]           ; 0045381d
    FMUL float ptr [0x0065c63c]         ; 00453820 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 00453826
    MOV EBX,dword ptr [ESP + 0x28]      ; 00453829
    PUSH EBX                            ; 0045382d
    LEA EDX,[ESP + 0x10]                ; 0045382e
    PUSH EDX                            ; 00453832
    MOV EAX,dword ptr [ECX + 0x3c]      ; 00453833
    PUSH ECX                            ; 00453836
    CALL dword ptr [EAX + 0x8]          ; 00453837
    MOV ECX,dword ptr [0x0066ed04]      ; 0045383a | g_FogColorIndexR
    MOV ESI,EAX                         ; 00453840
    MOV EAX,[0x0066ed0c]                ; 00453842 | g_FogColorIndexB
    MOV EDI,dword ptr [0x0067939c]      ; 00453847 | g_BitsPerPixel
    MOV EBX,dword ptr [ECX*0x4 + 0xc19dfc] ; 0045384d | g_LightmapTexturePalette[64]
    MOV EDX,dword ptr [EAX*0x4 + 0xc19dfc] ; 00453854 | g_LightmapTexturePalette[64]
    MOV EAX,[0x0066ed08]                ; 0045385b | g_FogColorIndexG
    ADD ESP,0xc                         ; 00453860
    AND EBX,0xff                        ; 00453863
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 00453869 | g_LightmapTexturePalette[64]
    AND EDX,0xff                        ; 00453870
    AND EAX,0xff                        ; 00453876
    CMP EDI,0x20                        ; 0045387b
    JNZ 0x004538b2                      ; 0045387e
        ;   XREF to: 004538b2 (CONDITIONAL_JUMP)  ; LAB_004538b2
    MOV CL,byte ptr [0x02d01f24]        ; 00453880 | g_RedBitPosition
    SHL EBX,CL                          ; 00453886
    MOV CL,byte ptr [0x02d01f30]        ; 00453888 | g_GreenBitPosition
    SHL EAX,CL                          ; 0045388e
    MOV CL,byte ptr [0x02d01f3c]        ; 00453890 | g_BlueBitPosition
    OR EBX,EAX                          ; 00453896
    SHL EDX,CL                          ; 00453898
    MOV ECX,EBX                         ; 0045389a
    OR ECX,EDX                          ; 0045389c
        ;   Label: LAB_0045389c
    MOV dword ptr [0x02d051f4],ESI      ; 0045389e | g_PerspectiveReciprocal
    MOV dword ptr [0x02d052a8],ECX      ; 004538a4 | g_SolidColorMode
    POP EBX                             ; 004538aa
    POP ESI                             ; 004538ab
    POP EDI                             ; 004538ac
    ADD ESP,0xc                         ; 004538ad
    POP EBP                             ; 004538b0
    RET                                 ; 004538b1
    MOV ECX,EBX                         ; 004538b2
        ;   Label: LAB_004538b2
    SHL EAX,0x8                         ; 004538b4
    SHL ECX,0x10                        ; 004538b7
    OR ECX,EAX                          ; 004538ba
    JMP 0x0045389c                      ; 004538bc
        ;   XREF to: 0045389c (UNCONDITIONAL_JUMP)  ; LAB_0045389c


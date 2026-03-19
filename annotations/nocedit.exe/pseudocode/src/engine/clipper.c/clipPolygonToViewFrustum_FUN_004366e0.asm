; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; char[252]        Stack[-0x24c]:252  local_24c
; undefined4[32]   Stack[-0x150]:128  auStack_150
; undefined4       Stack[-0xd0]:4  uStack_d0
; undefined1[128]  Stack[-0xcc]:128  local_cc
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; undefined4 *     Stack[-0x24]:4  local_24
; undefined4 *     Stack[-0x20]:4  local_20
; undefined4 *     Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_004371b0 at 004371c4
;
; Referenced Globals:
;   void* switchdataD_0043668c = 004369b8
;   void* PTR_caseD_1_00436690 = 00436c9c
;   void* PTR_caseD_3_00436698 = 004369cb
;   void* switchdataD_0043669c = 00436a5a
;   void* PTR_caseD_1_004366a0 = 00436d75
;   void* PTR_caseD_3_004366a8 = 00436a5f
;   void* switchdataD_004366ac = 00436af8
;   void* PTR_caseD_1_004366b0 = 00436e24
;   void* PTR_caseD_3_004366b8 = 00436afd
;   void* switchdataD_004366bc = 00436ba0
;   void* PTR_caseD_1_004366c0 = 00436ed3
;   void* PTR_caseD_3_004366c8 = 00436ba5
;   void* switchdataD_004366cc = 00437073
;   void* PTR_caseD_3_004366d8 = 004370b8
;   TerminatedCString s_engine_clipper_c_00618103
;   ... and 53 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
;   engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
;   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
;   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   wincore_windll.cpp_drawPolygon2_FUN_005b7610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004366e0
        ;   Label: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
    PUSH ESI                            ; 004366e1
    PUSH EDI                            ; 004366e2
    PUSH EBP                            ; 004366e3
    SUB ESP,0x23c                       ; 004366e4
    MOV EBP,dword ptr [ESP + 0x250]     ; 004366ea
    TEST EBP,EBP                        ; 004366f1
    JL 0x004366fa                       ; 004366f3
        ;   XREF to: 004366fa (CONDITIONAL_JUMP)  ; LAB_004366fa
    CMP EBP,0x10                        ; 004366f5
    JLE 0x0043672e                      ; 004366f8
        ;   XREF to: 0043672e (CONDITIONAL_JUMP)  ; LAB_0043672e
    PUSH EBP                            ; 004366fa
        ;   Label: LAB_004366fa
    PUSH 0x618131                       ; 004366fb | = "Too many poly verticies : %d"
    LEA EAX,[ESP + 0x8]                 ; 00436700
    PUSH EAX                            ; 00436704
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00436705
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x61814e                    ; 0043670a | = "..\\engine\\clipper.c"
    ADD ESP,0xc                         ; 0043670f
    MOV EAX,ESP                         ; 00436712
    MOV ECX,0x276                       ; 00436714
    PUSH EAX                            ; 00436719
    MOV dword ptr [0x02f0ca48],EDX      ; 0043671a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00436720 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436726
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043672b
    MOV ECX,0xffffffff                  ; 0043672e
        ;   Label: LAB_0043672e
    XOR EAX,EAX                         ; 00436733
    XOR ESI,ESI                         ; 00436735
    TEST EBP,EBP                        ; 00436737
    JLE 0x0043675e                      ; 00436739
        ;   XREF to: 0043675e (CONDITIONAL_JUMP)  ; LAB_0043675e
    MOV EDX,dword ptr [ESP + 0x254]     ; 0043673b
    IMUL EBX,dword ptr [EDX],0x30       ; 00436742
        ;   Label: LAB_00436742
    MOV EBX,dword ptr [EBX + 0x688024]  ; 00436745 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    TEST EBX,0x80000000                 ; 0043674b
    JZ 0x00436754                       ; 00436751
        ;   XREF to: 00436754 (CONDITIONAL_JUMP)  ; LAB_00436754
    INC ESI                             ; 00436753
    ADD EDX,0x4                         ; 00436754
        ;   Label: LAB_00436754
    INC EAX                             ; 00436757
    AND ECX,EBX                         ; 00436758
    CMP EAX,EBP                         ; 0043675a
    JL 0x00436742                       ; 0043675c
        ;   XREF to: 00436742 (CONDITIONAL_JUMP)  ; LAB_00436742
    CMP ESI,EBP                         ; 0043675e
        ;   Label: LAB_0043675e
    JNZ 0x0043676b                      ; 00436760
        ;   XREF to: 0043676b (CONDITIONAL_JUMP)  ; LAB_0043676b
    TEST CL,0xff                        ; 00436762
    JNZ 0x00436830                      ; 00436765
        ;   XREF to: 00436830 (CONDITIONAL_JUMP)  ; LAB_00436830
    TEST ESI,ESI                        ; 0043676b
        ;   Label: LAB_0043676b
    JNZ 0x0043691d                      ; 0043676d
        ;   XREF to: 0043691d (CONDITIONAL_JUMP)  ; LAB_0043691d
    CMP dword ptr [0x02d03e94],0x0      ; 00436773 | g_UseExternalRenderer
    JZ 0x00436898                       ; 0043677a
        ;   XREF to: 00436898 (CONDITIONAL_JUMP)  ; LAB_00436898
    CMP dword ptr [0x00772a74],0x0      ; 00436780 | g_TexturesDisabled
    JNZ 0x00436898                      ; 00436787
        ;   XREF to: 00436898 (CONDITIONAL_JUMP)  ; LAB_00436898
    XOR EAX,EAX                         ; 0043678d
    TEST EBP,EBP                        ; 0043678f
    JLE 0x004367c0                      ; 00436791
        ;   XREF to: 004367c0 (CONDITIONAL_JUMP)  ; LAB_004367c0
    MOV EBX,dword ptr [ESP + 0x254]     ; 00436793
    IMUL ECX,dword ptr [EBX],0x30       ; 0043679a
        ;   Label: LAB_0043679a
    INC EAX                             ; 0043679d
    ADD ECX,0x688014                    ; 0043679e | g_RenderVertexBuffer
    ADD EBX,0x4                         ; 004367a4
    MOV dword ptr [EAX*0x4 + 0x825424],ECX ; 004367a7 | g_ClipperCullingPointers | g_ClipperCullingPointers[1]
    CMP EAX,EBP                         ; 004367ae
    JL 0x0043679a                       ; 004367b0
        ;   XREF to: 0043679a (CONDITIONAL_JUMP)  ; LAB_0043679a
    LEA EAX,[EAX]                       ; 004367b2
    LEA EDX,[EDX]                       ; 004367b8
    MOV EAX,EAX                         ; 004367be
    CMP dword ptr [0x00772a7c],0x0      ; 004367c0 | g_CullingMode
        ;   Label: LAB_004367c0
    JZ 0x00436862                       ; 004367c7
        ;   XREF to: 00436862 (CONDITIONAL_JUMP)  ; LAB_00436862
    CMP EBP,0x3                         ; 004367cd
    JLE 0x00436842                      ; 004367d0
        ;   XREF to: 00436842 (CONDITIONAL_JUMP)  ; LAB_00436842
    LEA EAX,[EBP + -0x2]                ; 004367d6
    XOR EBX,EBX                         ; 004367d9
    MOV dword ptr [ESP + 0x224],EAX     ; 004367db
    LEA EDI,[EAX*0x4 + 0x0]             ; 004367e2
    XOR ESI,ESI                         ; 004367e9
    TEST EDI,EDI                        ; 004367eb
    JLE 0x00436817                      ; 004367ed
        ;   XREF to: 00436817 (CONDITIONAL_JUMP)  ; LAB_00436817
    MOV EAX,dword ptr [EBX + 0x825430]  ; 004367ef | g_ClipperCullingPointers[2] | g_ClipperCullingPointers[3]
        ;   Label: LAB_004367ef
    PUSH EAX                            ; 004367f5
    MOV EDX,dword ptr [EBX + 0x82542c]  ; 004367f6 | g_ClipperCullingPointers[1] | g_ClipperCullingPointers[2]
    PUSH EDX                            ; 004367fc
    MOV ECX,dword ptr [0x00825428]      ; 004367fd | g_ClipperCullingPointers
    PUSH ECX                            ; 00436803
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00436804
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00436809
    TEST EAX,EAX                        ; 0043680c
    JZ 0x0043683f                       ; 0043680e
        ;   XREF to: 0043683f (CONDITIONAL_JUMP)  ; LAB_0043683f
    ADD EBX,0x4                         ; 00436810
        ;   Label: LAB_00436810
    CMP EBX,EDI                         ; 00436813
    JL 0x004367ef                       ; 00436815
        ;   XREF to: 004367ef (CONDITIONAL_JUMP)  ; LAB_004367ef
    CMP ESI,dword ptr [ESP + 0x224]     ; 00436817
        ;   Label: LAB_00436817
    JNZ 0x00436862                      ; 0043681e
        ;   XREF to: 00436862 (CONDITIONAL_JUMP)  ; LAB_00436862
        ;   Label: LAB_0043681e
    MOV EAX,0x1                         ; 00436820
        ;   Label: LAB_00436820
    ADD ESP,0x23c                       ; 00436825
        ;   Label: LAB_00436825
    POP EBP                             ; 0043682b
    POP EDI                             ; 0043682c
    POP ESI                             ; 0043682d
    POP EBX                             ; 0043682e
    RET                                 ; 0043682f
    XOR EBP,EBP                         ; 00436830
        ;   Label: LAB_00436830
    MOV EAX,0x1                         ; 00436832
    MOV dword ptr [0x00824e24],EBP      ; 00436837 | g_ClippedVertexCount
    JMP 0x00436825                      ; 0043683d
        ;   XREF to: 00436825 (UNCONDITIONAL_JUMP)  ; LAB_00436825
    INC ESI                             ; 0043683f
        ;   Label: LAB_0043683f
    JMP 0x00436810                      ; 00436840
        ;   XREF to: 00436810 (UNCONDITIONAL_JUMP)  ; LAB_00436810
    MOV EAX,[0x00825430]                ; 00436842 | g_ClipperCullingPointers[2]
        ;   Label: LAB_00436842
    PUSH EAX                            ; 00436847
    MOV EDX,dword ptr [0x0082542c]      ; 00436848 | g_ClipperCullingPointers[1]
    PUSH EDX                            ; 0043684e
    MOV ECX,dword ptr [0x00825428]      ; 0043684f | g_ClipperCullingPointers
    PUSH ECX                            ; 00436855
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00436856
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043685b
    TEST EAX,EAX                        ; 0043685e
    JMP 0x0043681e                      ; 00436860
        ;   XREF to: 0043681e (UNCONDITIONAL_JUMP)  ; LAB_0043681e
    MOV ESI,dword ptr [0x02d052a0]      ; 00436862 | g_RenderStateFlags
        ;   Label: LAB_00436862
    PUSH ESI                            ; 00436868
    LEA EAX,[EBP + -0x2]                ; 00436869
    MOV EBX,dword ptr [0x030e56b8]      ; 0043686c | g_RenderedTriangleCount
    PUSH EBP                            ; 00436872
    ADD EBX,EAX                         ; 00436873
    PUSH 0x825428                       ; 00436875 | g_ClipperCullingPointers
    MOV dword ptr [0x030e56b8],EBX      ; 0043687a | g_RenderedTriangleCount
    CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610 ; 00436880
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 00436885
    ADD ESP,0xc                         ; 0043688a
    ADD ESP,0x23c                       ; 0043688d
    POP EBP                             ; 00436893
    POP EDI                             ; 00436894
    POP ESI                             ; 00436895
    POP EBX                             ; 00436896
    RET                                 ; 00436897
    XOR EDI,EDI                         ; 00436898
        ;   Label: LAB_00436898
    MOV dword ptr [0x00824e24],EBP      ; 0043689a | g_ClippedVertexCount
    MOV dword ptr [ESP + 0x234],EDI     ; 004368a0
    TEST EBP,EBP                        ; 004368a7
    JLE 0x00436910                      ; 004368a9
        ;   XREF to: 00436910 (CONDITIONAL_JUMP)  ; LAB_00436910
    MOV EDX,dword ptr [ESP + 0x254]     ; 004368ab
    MOV EBX,0x824e28                    ; 004368b2 | g_ClippedVertexBuffer
    IMUL ESI,dword ptr [EDX],0x30       ; 004368b7
        ;   Label: LAB_004368b7
    MOV ECX,0x30                        ; 004368ba
    ADD ESI,0x688014                    ; 004368bf | g_RenderVertexBuffer
    MOV EDI,EBX                         ; 004368c5
    TEST EDI,0x7                        ; 004368c7
    JZ 0x004368d5                       ; 004368cd
        ;   XREF to: 004368d5 (CONDITIONAL_JUMP)  ; LAB_004368d5
    MOVSD ES:EDI,ESI                    ; 004368cf | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x | g_RenderVertexBuffer
    SUB ECX,0x4                         ; 004368d0
    JLE 0x004368f2                      ; 004368d3
        ;   XREF to: 004368f2 (CONDITIONAL_JUMP)  ; LAB_004368f2
    SUB ECX,0x8                         ; 004368d5
        ;   Label: LAB_004368d5
    JL 0x004368e6                       ; 004368d8
        ;   XREF to: 004368e6 (CONDITIONAL_JUMP)  ; LAB_004368e6
    FILD qword ptr [ESI]                ; 004368da | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    ADD ESI,0x8                         ; 004368dc
    FISTP qword ptr [EDI]               ; 004368df | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    ADD EDI,0x8                         ; 004368e1
    JMP 0x004368d5                      ; 004368e4
        ;   XREF to: 004368d5 (UNCONDITIONAL_JUMP)  ; LAB_004368d5
    ADD ECX,0x8                         ; 004368e6
        ;   Label: LAB_004368e6
    JLE 0x004368f2                      ; 004368e9
        ;   XREF to: 004368f2 (CONDITIONAL_JUMP)  ; LAB_004368f2
    MOVSD ES:EDI,ESI                    ; 004368eb | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    SUB ECX,0x4                         ; 004368ec
    JLE 0x004368f2                      ; 004368ef
        ;   XREF to: 004368f2 (CONDITIONAL_JUMP)  ; LAB_004368f2
    MOVSD ES:EDI,ESI                    ; 004368f1 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,dword ptr [ESP + 0x234]     ; 004368f2
        ;   Label: LAB_004368f2
    ADD EDX,0x4                         ; 004368f9
    INC EAX                             ; 004368fc
    ADD EBX,0x30                        ; 004368fd
    MOV dword ptr [ESP + 0x234],EAX     ; 00436900
    CMP EBP,EAX                         ; 00436907
    JG 0x004368b7                       ; 00436909
        ;   XREF to: 004368b7 (CONDITIONAL_JUMP)  ; LAB_004368b7
    LEA EAX,[EAX]                       ; 0043690b
    MOV ECX,ECX                         ; 0043690e
    XOR EAX,EAX                         ; 00436910
        ;   Label: LAB_00436910
    ADD ESP,0x23c                       ; 00436912
    POP EBP                             ; 00436918
    POP EDI                             ; 00436919
    POP ESI                             ; 0043691a
    POP EBX                             ; 0043691b
    RET                                 ; 0043691c
    XOR EAX,EAX                         ; 0043691d
        ;   Label: LAB_0043691d
    TEST EBP,EBP                        ; 0043691f
    JLE 0x00436950                      ; 00436921
        ;   XREF to: 00436950 (CONDITIONAL_JUMP)  ; LAB_00436950
    MOV EBX,dword ptr [ESP + 0x254]     ; 00436923
    IMUL EDX,dword ptr [EBX],0x30       ; 0043692a
        ;   Label: LAB_0043692a
    INC EAX                             ; 0043692d
    ADD EDX,0x688014                    ; 0043692e | g_RenderVertexBuffer
    ADD EBX,0x4                         ; 00436934
    MOV dword ptr [ESP + EAX*0x4 + 0xfc],EDX ; 00436937
    CMP EAX,EBP                         ; 0043693e
    JL 0x0043692a                       ; 00436940
        ;   XREF to: 0043692a (CONDITIONAL_JUMP)  ; LAB_0043692a
    LEA EAX,[EAX]                       ; 00436942
    LEA EDX,[EDX]                       ; 00436948
    MOV EAX,EAX                         ; 0043694e
    LEA EAX,[ESP + 0x180]               ; 00436950
        ;   Label: LAB_00436950
    LEA EDX,[ESP + 0x100]               ; 00436957
    MOV dword ptr [0x00824e24],EBP      ; 0043695e | g_ClippedVertexCount
    XOR EBX,EBX                         ; 00436964
    MOV dword ptr [ESP + 0x204],EBP     ; 00436966
    MOV dword ptr [0x00825cec],EBX      ; 0043696d | g_ClipperTempCount
    MOV dword ptr [ESP + 0x200],EAX     ; 00436973
    MOV dword ptr [ESP + 0x208],EBX     ; 0043697a
    MOV ESI,dword ptr [EDX + EBP*0x4 + -0x4] ; 00436981
    TEST EBP,EBP                        ; 00436985
    JLE 0x004369ea                      ; 00436987
        ;   XREF to: 004369ea (CONDITIONAL_JUMP)  ; LAB_004369ea
    LEA EBP,[ESP + 0x100]               ; 00436989
    MOV EDX,dword ptr [ESI]             ; 00436990 | g_RenderVertexBuffer
        ;   Label: LAB_00436990
    MOV ECX,dword ptr [ESI + 0x8]       ; 00436992 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EDI,dword ptr [EBP]             ; 00436995
    XOR EAX,EAX                         ; 00436998
    CMP EDX,ECX                         ; 0043699a
    JL 0x004369a3                       ; 0043699c
        ;   XREF to: 004369a3 (CONDITIONAL_JUMP)  ; LAB_004369a3
    MOV EAX,0x1                         ; 0043699e
    MOV ECX,dword ptr [EDI + 0x8]       ; 004369a3 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_004369a3
    CMP ECX,dword ptr [EDI]             ; 004369a6 | g_RenderVertexBuffer
    JG 0x004369ac                       ; 004369a8
        ;   XREF to: 004369ac (CONDITIONAL_JUMP)  ; LAB_004369ac
    OR AL,0x2                           ; 004369aa
    CMP EAX,0x3                         ; 004369ac
        ;   Label: LAB_004369ac
    JA 0x004369cb                       ; 004369af
        ;   XREF to: 004369cb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43668c]  ; 004369b1 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x200]     ; 004369b8
        ;   Label: caseD_0
    LEA EAX,[EBX*0x4 + 0x0]             ; 004369bf
    ADD EAX,ECX                         ; 004369c6
    INC EBX                             ; 004369c8
    MOV dword ptr [EAX],ESI             ; 004369c9
    MOV EAX,dword ptr [ESP + 0x208]     ; 004369cb
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x204]     ; 004369d2
    MOV ESI,EDI                         ; 004369d9
    INC EAX                             ; 004369db
    ADD EBP,0x4                         ; 004369dc
    MOV dword ptr [ESP + 0x208],EAX     ; 004369df
    CMP EAX,EDX                         ; 004369e6
    JL 0x00436990                       ; 004369e8
        ;   XREF to: 00436990 (CONDITIONAL_JUMP)  ; LAB_00436990
    MOV dword ptr [0x00824e24],EBX      ; 004369ea | g_ClippedVertexCount
        ;   Label: LAB_004369ea
    CMP EBX,0x3                         ; 004369f0
    JL 0x00436820                       ; 004369f3
        ;   XREF to: 00436820 (CONDITIONAL_JUMP)  ; LAB_00436820
    LEA EDX,[ESP + 0x180]               ; 004369f9
    LEA EBP,[ESP + 0x100]               ; 00436a00
    XOR ESI,ESI                         ; 00436a07
    MOV dword ptr [ESP + 0x20c],EBX     ; 00436a09
    MOV dword ptr [ESP + 0x210],ESI     ; 00436a10
    MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4] ; 00436a17
    TEST EBX,EBX                        ; 00436a1b
    JLE 0x00436a8c                      ; 00436a1d
        ;   XREF to: 00436a8c (CONDITIONAL_JUMP)  ; LAB_00436a8c
    MOV dword ptr [ESP + 0x228],EDX     ; 00436a1f
    MOV EBX,dword ptr [ESP + 0x228]     ; 00436a26
        ;   Label: LAB_00436a26
    MOV EDX,dword ptr [EDI + 0x8]       ; 00436a2d | g_ClipperTempBuffer[0].projected_vertex.transformed_z
    MOV ECX,dword ptr [EDI]             ; 00436a30 | g_ClipperTempBuffer
    XOR EAX,EAX                         ; 00436a32
    NEG EDX                             ; 00436a34
    MOV EBX,dword ptr [EBX]             ; 00436a36
    CMP EDX,ECX                         ; 00436a38
    JL 0x00436a41                       ; 00436a3a
        ;   XREF to: 00436a41 (CONDITIONAL_JUMP)  ; LAB_00436a41
    MOV EAX,0x1                         ; 00436a3c
    MOV EDX,dword ptr [EBX + 0x8]       ; 00436a41 | g_ClipperTempBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00436a41
    MOV ECX,dword ptr [EBX]             ; 00436a44 | g_ClipperTempBuffer
    NEG EDX                             ; 00436a46
    CMP EDX,ECX                         ; 00436a48
    JL 0x00436a4e                       ; 00436a4a
        ;   XREF to: 00436a4e (CONDITIONAL_JUMP)  ; LAB_00436a4e
    OR AL,0x2                           ; 00436a4c
    CMP EAX,0x3                         ; 00436a4e
        ;   Label: LAB_00436a4e
    JA 0x00436a5f                       ; 00436a51
        ;   XREF to: 00436a5f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43669c]  ; 00436a53 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    INC ESI                             ; 00436a5a
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 00436a5b | g_ClipperTempBuffer
    MOV EAX,dword ptr [ESP + 0x210]     ; 00436a5f
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x20c]     ; 00436a66
    MOV EDI,EBX                         ; 00436a6d
    MOV EBX,dword ptr [ESP + 0x228]     ; 00436a6f
    INC EAX                             ; 00436a76
    ADD EBX,0x4                         ; 00436a77
    MOV dword ptr [ESP + 0x210],EAX     ; 00436a7a
    MOV dword ptr [ESP + 0x228],EBX     ; 00436a81
    CMP EAX,EDX                         ; 00436a88
    JL 0x00436a26                       ; 00436a8a
        ;   XREF to: 00436a26 (CONDITIONAL_JUMP)  ; LAB_00436a26
    MOV dword ptr [0x00824e24],ESI      ; 00436a8c | g_ClippedVertexCount
        ;   Label: LAB_00436a8c
    CMP ESI,0x3                         ; 00436a92
    JL 0x00436820                       ; 00436a95
        ;   XREF to: 00436820 (CONDITIONAL_JUMP)  ; LAB_00436820
    LEA EDX,[ESP + 0x100]               ; 00436a9b
    LEA EBP,[ESP + 0x180]               ; 00436aa2
    XOR EBX,EBX                         ; 00436aa9
    MOV dword ptr [ESP + 0x214],ESI     ; 00436aab
    MOV dword ptr [ESP + 0x218],EBX     ; 00436ab2
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 00436ab9
    TEST ESI,ESI                        ; 00436abd
    JLE 0x00436b2a                      ; 00436abf
        ;   XREF to: 00436b2a (CONDITIONAL_JUMP)  ; LAB_00436b2a
    MOV dword ptr [ESP + 0x22c],EDX     ; 00436ac1
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00436ac8
        ;   Label: LAB_00436ac8
    MOV EDX,dword ptr [EDI + 0x4]       ; 00436acf | g_RenderVertexBuffer[0].projected_vertex.transformed_y | g_ClipperTempBuffer[0].projected_vertex.transformed_y | g_ClipperTempBuffer[1].projected_vertex.transformed_y
    MOV ECX,dword ptr [EDI + 0x8]       ; 00436ad2 | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_ClipperTempBuffer[0].projected_vertex.transformed_z | g_ClipperTempBuffer[1].projected_vertex.transformed_z
    XOR EAX,EAX                         ; 00436ad5
    MOV ESI,dword ptr [ESI]             ; 00436ad7
    CMP EDX,ECX                         ; 00436ad9
    JL 0x00436ae2                       ; 00436adb
        ;   XREF to: 00436ae2 (CONDITIONAL_JUMP)  ; LAB_00436ae2
    MOV EAX,0x1                         ; 00436add
    MOV ECX,dword ptr [ESI + 0x8]       ; 00436ae2 | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_ClipperTempBuffer[0].projected_vertex.transformed_z | g_ClipperTempBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_00436ae2
    CMP ECX,dword ptr [ESI + 0x4]       ; 00436ae5 | g_RenderVertexBuffer[0].projected_vertex.transformed_y | g_ClipperTempBuffer[0].projected_vertex.transformed_y | g_ClipperTempBuffer[1].projected_vertex.transformed_y
    JG 0x00436aec                       ; 00436ae8
        ;   XREF to: 00436aec (CONDITIONAL_JUMP)  ; LAB_00436aec
    OR AL,0x2                           ; 00436aea
    CMP EAX,0x3                         ; 00436aec
        ;   Label: LAB_00436aec
    JA 0x00436afd                       ; 00436aef
        ;   XREF to: 00436afd (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4366ac]  ; 00436af1 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    INC EBX                             ; 00436af8
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00436af9 | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    MOV ECX,dword ptr [ESP + 0x22c]     ; 00436afd
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x214]     ; 00436b04
    MOV EDI,ESI                         ; 00436b0b
    MOV ESI,dword ptr [ESP + 0x218]     ; 00436b0d
    ADD ECX,0x4                         ; 00436b14
    INC ESI                             ; 00436b17
    MOV dword ptr [ESP + 0x22c],ECX     ; 00436b18
    MOV dword ptr [ESP + 0x218],ESI     ; 00436b1f
    CMP ESI,EDX                         ; 00436b26
    JL 0x00436ac8                       ; 00436b28
        ;   XREF to: 00436ac8 (CONDITIONAL_JUMP)  ; LAB_00436ac8
    MOV dword ptr [0x00824e24],EBX      ; 00436b2a | g_ClippedVertexCount
        ;   Label: LAB_00436b2a
    CMP EBX,0x3                         ; 00436b30
    JL 0x00436820                       ; 00436b33
        ;   XREF to: 00436820 (CONDITIONAL_JUMP)  ; LAB_00436820
    LEA EDX,[ESP + 0x180]               ; 00436b39
    LEA EBP,[ESP + 0x100]               ; 00436b40
    XOR ESI,ESI                         ; 00436b47
    MOV dword ptr [ESP + 0x21c],EBX     ; 00436b49
    MOV dword ptr [ESP + 0x220],ESI     ; 00436b50
    MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4] ; 00436b57
    TEST EBX,EBX                        ; 00436b5b
    JLE 0x00436bd2                      ; 00436b5d
        ;   XREF to: 00436bd2 (CONDITIONAL_JUMP)  ; LAB_00436bd2
    MOV dword ptr [ESP + 0x230],EDX     ; 00436b63
    MOV EBX,dword ptr [ESP + 0x230]     ; 00436b6a
        ;   Label: LAB_00436b6a
    MOV EDX,dword ptr [EDI + 0x8]       ; 00436b71 | g_ClipperTempBuffer[1].projected_vertex.transformed_z | g_ClipperTempBuffer[2].projected_vertex.transformed_z
    MOV ECX,dword ptr [EDI + 0x4]       ; 00436b74 | g_ClipperTempBuffer[1].projected_vertex.transformed_y | g_ClipperTempBuffer[2].projected_vertex.transformed_y
    XOR EAX,EAX                         ; 00436b77
    NEG EDX                             ; 00436b79
    MOV EBX,dword ptr [EBX]             ; 00436b7b | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    CMP EDX,ECX                         ; 00436b7d
    JL 0x00436b86                       ; 00436b7f
        ;   XREF to: 00436b86 (CONDITIONAL_JUMP)  ; LAB_00436b86
    MOV EAX,0x1                         ; 00436b81
    MOV EDX,dword ptr [EBX + 0x8]       ; 00436b86 | g_ClipperTempBuffer[1].projected_vertex.transformed_z | g_ClipperTempBuffer[2].projected_vertex.transformed_z
        ;   Label: LAB_00436b86
    MOV ECX,dword ptr [EBX + 0x4]       ; 00436b89 | g_ClipperTempBuffer[1].projected_vertex.transformed_y | g_ClipperTempBuffer[2].projected_vertex.transformed_y
    NEG EDX                             ; 00436b8c
    CMP EDX,ECX                         ; 00436b8e
    JL 0x00436b94                       ; 00436b90
        ;   XREF to: 00436b94 (CONDITIONAL_JUMP)  ; LAB_00436b94
    OR AL,0x2                           ; 00436b92
    CMP EAX,0x3                         ; 00436b94
        ;   Label: LAB_00436b94
    JA 0x00436ba5                       ; 00436b97
        ;   XREF to: 00436ba5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4366bc]  ; 00436b99 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    INC ESI                             ; 00436ba0
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 00436ba1 | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    MOV ECX,dword ptr [ESP + 0x230]     ; 00436ba5
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00436bac
    MOV EDI,EBX                         ; 00436bb3
    MOV EBX,dword ptr [ESP + 0x220]     ; 00436bb5
    ADD ECX,0x4                         ; 00436bbc
    INC EBX                             ; 00436bbf
    MOV dword ptr [ESP + 0x230],ECX     ; 00436bc0
    MOV dword ptr [ESP + 0x220],EBX     ; 00436bc7
    CMP EBX,EDX                         ; 00436bce
    JL 0x00436b6a                       ; 00436bd0
        ;   XREF to: 00436b6a (CONDITIONAL_JUMP)  ; LAB_00436b6a
    MOV dword ptr [0x00824e24],ESI      ; 00436bd2 | g_ClippedVertexCount
        ;   Label: LAB_00436bd2
    CMP ESI,0x3                         ; 00436bd8
    JL 0x00436820                       ; 00436bdb
        ;   XREF to: 00436820 (CONDITIONAL_JUMP)  ; LAB_00436820
    XOR EBP,EBP                         ; 00436be1
    TEST ESI,ESI                        ; 00436be3
    JLE 0x00436c40                      ; 00436be5
        ;   XREF to: 00436c40 (CONDITIONAL_JUMP)  ; LAB_00436c40
    MOV EBX,0x824e28                    ; 00436be7 | g_ClippedVertexBuffer
    XOR EDX,EDX                         ; 00436bec
    MOV ECX,0x30                        ; 00436bee
        ;   Label: LAB_00436bee
    MOV EDI,EBX                         ; 00436bf3
    MOV ESI,dword ptr [ESP + EDX*0x1 + 0x100] ; 00436bf5
    TEST EDI,0x7                        ; 00436bfc
    JZ 0x00436c0a                       ; 00436c02
        ;   XREF to: 00436c0a (CONDITIONAL_JUMP)  ; LAB_00436c0a
    MOVSD ES:EDI,ESI                    ; 00436c04 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 00436c05
    JLE 0x00436c27                      ; 00436c08
        ;   XREF to: 00436c27 (CONDITIONAL_JUMP)  ; LAB_00436c27
    SUB ECX,0x8                         ; 00436c0a
        ;   Label: LAB_00436c0a
    JL 0x00436c1b                       ; 00436c0d
        ;   XREF to: 00436c1b (CONDITIONAL_JUMP)  ; LAB_00436c1b
    FILD qword ptr [ESI]                ; 00436c0f | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_z | g_ClipperTempBuffer[2].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 00436c11
    FISTP qword ptr [EDI]               ; 00436c14 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    ADD EDI,0x8                         ; 00436c16
    JMP 0x00436c0a                      ; 00436c19
        ;   XREF to: 00436c0a (UNCONDITIONAL_JUMP)  ; LAB_00436c0a
    ADD ECX,0x8                         ; 00436c1b
        ;   Label: LAB_00436c1b
    JLE 0x00436c27                      ; 00436c1e
        ;   XREF to: 00436c27 (CONDITIONAL_JUMP)  ; LAB_00436c27
    MOVSD ES:EDI,ESI                    ; 00436c20 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SUB ECX,0x4                         ; 00436c21
    JLE 0x00436c27                      ; 00436c24
        ;   XREF to: 00436c27 (CONDITIONAL_JUMP)  ; LAB_00436c27
    MOVSD ES:EDI,ESI                    ; 00436c26 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z | g_RenderVertexBuffer[0].projected_vertex.inv_z
    ADD EDX,0x4                         ; 00436c27
        ;   Label: LAB_00436c27
    INC EBP                             ; 00436c2a
    MOV ECX,dword ptr [0x00824e24]      ; 00436c2b | g_ClippedVertexCount
    ADD EBX,0x30                        ; 00436c31
    CMP EBP,ECX                         ; 00436c34
    JL 0x00436bee                       ; 00436c36
        ;   XREF to: 00436bee (CONDITIONAL_JUMP)  ; LAB_00436bee
    LEA EAX,[EAX]                       ; 00436c38
    MOV EDX,EDX                         ; 00436c3e
    MOV EBX,dword ptr [0x0066e804]      ; 00436c40 | g_NearPlaneDistance
        ;   Label: LAB_00436c40
    XOR EDX,EDX                         ; 00436c46
    TEST EBX,EBX                        ; 00436c48
    JNZ 0x00436f82                      ; 00436c4a
        ;   XREF to: 00436f82 (CONDITIONAL_JUMP)  ; LAB_00436f82
    MOV EBP,dword ptr [0x00824e24]      ; 00436c50 | g_ClippedVertexCount
        ;   Label: LAB_00436c50
    CMP EBP,0x3                         ; 00436c56
    JL 0x00436820                       ; 00436c59
        ;   XREF to: 00436820 (CONDITIONAL_JUMP)  ; LAB_00436820
    XOR EDX,EDX                         ; 00436c5f
    TEST EBP,EBP                        ; 00436c61
    JLE 0x00436c8f                      ; 00436c63
        ;   XREF to: 00436c8f (CONDITIONAL_JUMP)  ; LAB_00436c8f
    MOV EAX,0x824e28                    ; 00436c65 | g_ClippedVertexBuffer
    MOV EBX,dword ptr [EAX + 0x8]       ; 00436c6a | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_00436c6a
    TEST EBX,EBX                        ; 00436c6d
    JNZ 0x00437174                      ; 00436c6f
        ;   XREF to: 00437174 (CONDITIONAL_JUMP)  ; LAB_00437174
    MOV dword ptr [EAX + 0x8],0x1       ; 00436c75 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
    MOV dword ptr [EAX],EBX             ; 00436c7c | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],EBX       ; 00436c7e | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
        ;   Label: LAB_00436c7e
    MOV ECX,dword ptr [0x00824e24]      ; 00436c81 | g_ClippedVertexCount
        ;   Label: LAB_00436c81
    INC EDX                             ; 00436c87
    ADD EAX,0x30                        ; 00436c88
    CMP EDX,ECX                         ; 00436c8b
    JL 0x00436c6a                       ; 00436c8d
        ;   XREF to: 00436c6a (CONDITIONAL_JUMP)  ; LAB_00436c6a
    XOR EAX,EAX                         ; 00436c8f
        ;   Label: LAB_00436c8f
    ADD ESP,0x23c                       ; 00436c91
    POP EBP                             ; 00436c97
    POP EDI                             ; 00436c98
    POP ESI                             ; 00436c99
    POP EBX                             ; 00436c9a
    RET                                 ; 00436c9b
    CMP dword ptr [0x00825cec],0xc      ; 00436c9c | g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x00436cc7                       ; 00436ca3
        ;   XREF to: 00436cc7 (CONDITIONAL_JUMP)  ; LAB_00436cc7
    MOV EAX,0x618103                    ; 00436ca5 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 00436caa
    PUSH 0x618117                       ; 00436caf | = "Ran out of clipped verts!"
    MOV [0x02f0ca48],EAX                ; 00436cb4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00436cb9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436cbf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436cc4
    MOV EAX,[0x00825cec]                ; 00436cc7 | g_ClipperTempCount
        ;   Label: LAB_00436cc7
    IMUL EDX,EAX,0x30                   ; 00436ccc
    MOV ECX,dword ptr [ESP + 0x200]     ; 00436ccf
    ADD EDX,0x825aac                    ; 00436cd6 | g_ClipperTempBuffer
    INC EAX                             ; 00436cdc
    PUSH EDX                            ; 00436cdd | g_ClipperTempBuffer
    MOV [0x00825cec],EAX                ; 00436cde | g_ClipperTempCount
    LEA EAX,[EBX*0x4 + 0x0]             ; 00436ce3
    PUSH ESI                            ; 00436cea
    ADD EAX,ECX                         ; 00436ceb
    PUSH EDI                            ; 00436ced
    INC EBX                             ; 00436cee
    MOV dword ptr [EAX],EDX             ; 00436cef | g_ClipperTempBuffer
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00436cf1
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436cf6
    JMP 0x004369cb                      ; 00436cf9
        ;   XREF to: 004369cb (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDX,dword ptr [ESP + 0x200]     ; 00436cfe
        ;   Label: caseD_2
    LEA EAX,[EBX*0x4 + 0x0]             ; 00436d05
    ADD EAX,EDX                         ; 00436d0c
    MOV ECX,dword ptr [0x00825cec]      ; 00436d0e | g_ClipperTempCount
    INC EBX                             ; 00436d14
    MOV dword ptr [EAX],ESI             ; 00436d15
    CMP ECX,0xc                         ; 00436d17
    JL 0x00436d3e                       ; 00436d1a
        ;   XREF to: 00436d3e (CONDITIONAL_JUMP)  ; LAB_00436d3e
    MOV EAX,0x618103                    ; 00436d1c | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 00436d21
    PUSH 0x618117                       ; 00436d26 | = "Ran out of clipped verts!"
    MOV [0x02f0ca48],EAX                ; 00436d2b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00436d30 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436d36
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436d3b
    MOV EAX,[0x00825cec]                ; 00436d3e | g_ClipperTempCount
        ;   Label: LAB_00436d3e
    IMUL EDX,EAX,0x30                   ; 00436d43
    MOV ECX,dword ptr [ESP + 0x200]     ; 00436d46
    ADD EDX,0x825aac                    ; 00436d4d | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    INC EAX                             ; 00436d53
    PUSH EDX                            ; 00436d54 | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    MOV [0x00825cec],EAX                ; 00436d55 | g_ClipperTempCount
    LEA EAX,[EBX*0x4 + 0x0]             ; 00436d5a
    PUSH EDI                            ; 00436d61
    ADD EAX,ECX                         ; 00436d62
    PUSH ESI                            ; 00436d64
    INC EBX                             ; 00436d65
    MOV dword ptr [EAX],EDX             ; 00436d66 | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 00436d68
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436d6d
    JMP 0x004369cb                      ; 00436d70
        ;   XREF to: 004369cb (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00825cec],0xc      ; 00436d75 | g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x00436da0                       ; 00436d7c
        ;   XREF to: 00436da0 (CONDITIONAL_JUMP)  ; LAB_00436da0
    MOV ECX,0x618103                    ; 00436d7e | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00436d83
    PUSH 0x618117                       ; 00436d88 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00436d8d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00436d93 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436d98
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436d9d
    MOV EAX,[0x00825cec]                ; 00436da0 | g_ClipperTempCount
        ;   Label: LAB_00436da0
    IMUL EDX,EAX,0x30                   ; 00436da5
    ADD EDX,0x825aac                    ; 00436da8 | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    PUSH EDX                            ; 00436dae | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    PUSH EDI                            ; 00436daf | g_ClipperTempBuffer
    INC ESI                             ; 00436db0
    INC EAX                             ; 00436db1
    PUSH EBX                            ; 00436db2 | g_ClipperTempBuffer
    MOV [0x00825cec],EAX                ; 00436db3 | g_ClipperTempCount
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00436db8 | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00436dbc
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436dc1
    JMP 0x00436a5f                      ; 00436dc4
        ;   XREF to: 00436a5f (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 00436dc9
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 00436dca | g_ClipperTempCount
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 00436dcf | g_ClipperTempBuffer
    CMP EAX,0xc                         ; 00436dd3
    JL 0x00436dfb                       ; 00436dd6
        ;   XREF to: 00436dfb (CONDITIONAL_JUMP)  ; LAB_00436dfb
    MOV EDX,0x618103                    ; 00436dd8 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00436ddd
    PUSH 0x618117                       ; 00436de2 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00436de7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00436ded | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436df3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436df8
    MOV EAX,[0x00825cec]                ; 00436dfb | g_ClipperTempCount
        ;   Label: LAB_00436dfb
    IMUL EDX,EAX,0x30                   ; 00436e00
    ADD EDX,0x825aac                    ; 00436e03 | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    PUSH EDX                            ; 00436e09 | g_ClipperTempBuffer | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    PUSH EBX                            ; 00436e0a
    INC ESI                             ; 00436e0b
    INC EAX                             ; 00436e0c
    PUSH EDI                            ; 00436e0d | g_ClipperTempBuffer
    MOV [0x00825cec],EAX                ; 00436e0e | g_ClipperTempCount
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00436e13 | g_ClipperTempBuffer | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 00436e17
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436e1c
    JMP 0x00436a5f                      ; 00436e1f
        ;   XREF to: 00436a5f (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00825cec],0xc      ; 00436e24 | g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x00436e4f                       ; 00436e2b
        ;   XREF to: 00436e4f (CONDITIONAL_JUMP)  ; LAB_00436e4f
    MOV ECX,0x618103                    ; 00436e2d | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00436e32
    PUSH 0x618117                       ; 00436e37 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00436e3c | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00436e42 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436e47
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436e4c
    MOV EAX,[0x00825cec]                ; 00436e4f | g_ClipperTempCount
        ;   Label: LAB_00436e4f
    IMUL EDX,EAX,0x30                   ; 00436e54
    ADD EDX,0x825aac                    ; 00436e57 | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    PUSH EDX                            ; 00436e5d | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    PUSH EDI                            ; 00436e5e | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    INC EBX                             ; 00436e5f
    INC EAX                             ; 00436e60
    PUSH ESI                            ; 00436e61 | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    MOV [0x00825cec],EAX                ; 00436e62 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00436e67 | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00436e6b
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436e70
    JMP 0x00436afd                      ; 00436e73
        ;   XREF to: 00436afd (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00436e78
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 00436e79 | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00436e7e | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    CMP EAX,0xc                         ; 00436e82
    JL 0x00436eaa                       ; 00436e85
        ;   XREF to: 00436eaa (CONDITIONAL_JUMP)  ; LAB_00436eaa
    MOV EDX,0x618103                    ; 00436e87 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00436e8c
    PUSH 0x618117                       ; 00436e91 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00436e96 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00436e9c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436ea2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436ea7
    MOV EAX,[0x00825cec]                ; 00436eaa | g_ClipperTempCount
        ;   Label: LAB_00436eaa
    IMUL EDX,EAX,0x30                   ; 00436eaf
    ADD EDX,0x825aac                    ; 00436eb2 | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[3].projected_vertex.transformed_x
    PUSH EDX                            ; 00436eb8 | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[3].projected_vertex.transformed_x
    PUSH ESI                            ; 00436eb9 | g_ClipperTempBuffer
    INC EBX                             ; 00436eba
    INC EAX                             ; 00436ebb
    PUSH EDI                            ; 00436ebc | g_ClipperTempBuffer | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    MOV [0x00825cec],EAX                ; 00436ebd | g_ClipperTempCount
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00436ec2 | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[3].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 00436ec6
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00436ecb
    JMP 0x00436afd                      ; 00436ece
        ;   XREF to: 00436afd (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00825cec],0xc      ; 00436ed3 | g_ClipperTempCount
        ;   Label: caseD_1
    JL 0x00436efe                       ; 00436eda
        ;   XREF to: 00436efe (CONDITIONAL_JUMP)  ; LAB_00436efe
    MOV ECX,0x618103                    ; 00436edc | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00436ee1
    PUSH 0x618117                       ; 00436ee6 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00436eeb | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00436ef1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436ef6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00436efb
    MOV EAX,[0x00825cec]                ; 00436efe | g_ClipperTempCount
        ;   Label: LAB_00436efe
    IMUL EDX,EAX,0x30                   ; 00436f03
    ADD EDX,0x825aac                    ; 00436f06 | g_ClipperTempBuffer[2].projected_vertex.transformed_x | g_ClipperTempBuffer[3].projected_vertex.transformed_x
    PUSH EDX                            ; 00436f0c | g_ClipperTempBuffer | g_ClipperTempBuffer[2].projected_vertex.transformed_x | g_ClipperTempBuffer[3].projected_vertex.transformed_x
    PUSH EDI                            ; 00436f0d | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    INC ESI                             ; 00436f0e
    INC EAX                             ; 00436f0f
    PUSH EBX                            ; 00436f10 | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    MOV [0x00825cec],EAX                ; 00436f11 | g_ClipperTempCount
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00436f16 | g_ClipperTempBuffer | g_ClipperTempBuffer[2].projected_vertex.transformed_x | g_ClipperTempBuffer[3].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00436f1a
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output) | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    ADD ESP,0xc                         ; 00436f1f
    JMP 0x00436ba5                      ; 00436f22
        ;   XREF to: 00436ba5 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 00436f27
        ;   Label: caseD_2
    MOV EAX,[0x00825cec]                ; 00436f28 | g_ClipperTempCount
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 00436f2d | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    CMP EAX,0xc                         ; 00436f31
    JL 0x00436f59                       ; 00436f34
        ;   XREF to: 00436f59 (CONDITIONAL_JUMP)  ; LAB_00436f59
    MOV EDX,0x618103                    ; 00436f36 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00436f3b
    PUSH 0x618117                       ; 00436f40 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00436f45 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00436f4b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00436f51
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format) | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    ADD ESP,0x4                         ; 00436f56
    MOV EAX,[0x00825cec]                ; 00436f59 | g_ClipperTempCount
        ;   Label: LAB_00436f59
    IMUL EDX,EAX,0x30                   ; 00436f5e
    ADD EDX,0x825aac                    ; 00436f61 | g_ClipperTempBuffer[2].projected_vertex.transformed_x | g_ClipperTempBuffer[4].projected_vertex.transformed_x
    PUSH EDX                            ; 00436f67 | g_ClipperTempBuffer[2].projected_vertex.transformed_x | g_ClipperTempBuffer[4].projected_vertex.transformed_x
    PUSH EBX                            ; 00436f68 | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    INC ESI                             ; 00436f69
    INC EAX                             ; 00436f6a
    PUSH EDI                            ; 00436f6b | g_ClipperTempBuffer[1].projected_vertex.transformed_x | g_ClipperTempBuffer[2].projected_vertex.transformed_x
    MOV [0x00825cec],EAX                ; 00436f6c | g_ClipperTempCount
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00436f71 | g_ClipperTempBuffer[2].projected_vertex.transformed_x | g_ClipperTempBuffer[4].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 00436f75
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output) | g_ClipperTempBuffer[1].projected_vertex.transformed_x
    ADD ESP,0xc                         ; 00436f7a
    JMP 0x00436ba5                      ; 00436f7d
        ;   XREF to: 00436ba5 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,dword ptr [0x00824e24]      ; 00436f82 | g_ClippedVertexCount
        ;   Label: LAB_00436f82
    TEST ESI,ESI                        ; 00436f88
    JLE 0x00436fad                      ; 00436f8a
        ;   XREF to: 00436fad (CONDITIONAL_JUMP)  ; LAB_00436fad
    LEA ECX,[ESI*0x4 + 0x0]             ; 00436f8c
    SUB ECX,ESI                         ; 00436f93
    XOR EAX,EAX                         ; 00436f95
    SHL ECX,0x4                         ; 00436f97
    MOV EBX,dword ptr [EAX + 0x824e30]  ; 00436f9a | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_00436f9a
    CMP EDX,EBX                         ; 00436fa0
    JGE 0x00436fa6                      ; 00436fa2
        ;   XREF to: 00436fa6 (CONDITIONAL_JUMP)  ; LAB_00436fa6
    MOV EDX,EBX                         ; 00436fa4
    ADD EAX,0x30                        ; 00436fa6
        ;   Label: LAB_00436fa6
    CMP EAX,ECX                         ; 00436fa9
    JL 0x00436f9a                       ; 00436fab
        ;   XREF to: 00436f9a (CONDITIONAL_JUMP)  ; LAB_00436f9a
    CMP EDX,dword ptr [0x0066e804]      ; 00436fad | g_NearPlaneDistance
        ;   Label: LAB_00436fad
    JL 0x00436c50                       ; 00436fb3
        ;   XREF to: 00436c50 (CONDITIONAL_JUMP)  ; LAB_00436c50
    MOV EAX,[0x00824e24]                ; 00436fb9 | g_ClippedVertexCount
    MOV ESI,0x824e28                    ; 00436fbe | g_ClippedVertexBuffer
    MOV [0x008254a8],EAX                ; 00436fc3 | g_SecondaryClipVertexCount
    LEA ECX,[EAX*0x4 + 0x0]             ; 00436fc8
    MOV EDI,0x8254ac                    ; 00436fcf | g_SecondaryClipVertexBuffer
    SUB ECX,EAX                         ; 00436fd4
    XOR EBP,EBP                         ; 00436fd6
    SHL ECX,0x4                         ; 00436fd8
    MOV dword ptr [ESP + 0x238],EBP     ; 00436fdb
    TEST EDI,0x7                        ; 00436fe2
    JZ 0x00436ff0                       ; 00436fe8
        ;   XREF to: 00436ff0 (CONDITIONAL_JUMP)  ; LAB_00436ff0
    MOVSD ES:EDI,ESI                    ; 00436fea | g_SecondaryClipVertexBuffer | g_ClippedVertexBuffer
    SUB ECX,0x4                         ; 00436feb
    JLE 0x0043700d                      ; 00436fee
        ;   XREF to: 0043700d (CONDITIONAL_JUMP)  ; LAB_0043700d
    SUB ECX,0x8                         ; 00436ff0
        ;   Label: LAB_00436ff0
    JL 0x00437001                       ; 00436ff3
        ;   XREF to: 00437001 (CONDITIONAL_JUMP)  ; LAB_00437001
    FILD qword ptr [ESI]                ; 00436ff5 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.inv_z
    ADD ESI,0x8                         ; 00436ff7
    FISTP qword ptr [EDI]               ; 00436ffa | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y | g_SecondaryClipVertexBuffer[0].projected_vertex.inv_z
    ADD EDI,0x8                         ; 00436ffc
    JMP 0x00436ff0                      ; 00436fff
        ;   XREF to: 00436ff0 (UNCONDITIONAL_JUMP)  ; LAB_00436ff0
    ADD ECX,0x8                         ; 00437001
        ;   Label: LAB_00437001
    JLE 0x0043700d                      ; 00437004
        ;   XREF to: 0043700d (CONDITIONAL_JUMP)  ; LAB_0043700d
    MOVSD ES:EDI,ESI                    ; 00437006 | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y | g_SecondaryClipVertexBuffer[0].projected_vertex.inv_z | g_ClippedVertexBuffer[0].projected_vertex.transformed_y
    SUB ECX,0x4                         ; 00437007
    JLE 0x0043700d                      ; 0043700a
        ;   XREF to: 0043700d (CONDITIONAL_JUMP)  ; LAB_0043700d
    MOVSD ES:EDI,ESI                    ; 0043700c | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[0].projected_vertex.screen_x | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    MOV EDX,dword ptr [0x008254a8]      ; 0043700d | g_SecondaryClipVertexCount
        ;   Label: LAB_0043700d
    MOV dword ptr [0x00824e24],EBP      ; 00437013 | g_ClippedVertexCount
    TEST EDX,EDX                        ; 00437019
    JLE 0x00436c50                      ; 0043701b
        ;   XREF to: 00436c50 (CONDITIONAL_JUMP)  ; LAB_00436c50
    MOV EBP,0x8254ac                    ; 00437021 | g_SecondaryClipVertexBuffer
    MOV EAX,dword ptr [ESP + 0x238]     ; 00437026
        ;   Label: LAB_00437026
    MOV EDX,dword ptr [0x008254a8]      ; 0043702d | g_SecondaryClipVertexCount
    INC EAX                             ; 00437033
    CMP EAX,EDX                         ; 00437034
    JNZ 0x0043703a                      ; 00437036
        ;   XREF to: 0043703a (CONDITIONAL_JUMP)  ; LAB_0043703a
    XOR EAX,EDX                         ; 00437038
    IMUL EAX,EAX,0x30                   ; 0043703a
        ;   Label: LAB_0043703a
    MOV EDX,0x8254ac                    ; 0043703d | g_SecondaryClipVertexBuffer
    MOV ESI,dword ptr [0x0066e804]      ; 00437042 | g_NearPlaneDistance
    MOV EBX,EBP                         ; 00437048 | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_x
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043704a | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_z
    ADD EDX,EAX                         ; 0043704d
    XOR EAX,EAX                         ; 0043704f
    CMP ECX,ESI                         ; 00437051
    JL 0x0043705a                       ; 00437053
        ;   XREF to: 0043705a (CONDITIONAL_JUMP)  ; LAB_0043705a
    MOV EAX,0x1                         ; 00437055
    MOV EDI,dword ptr [0x0066e804]      ; 0043705a | g_NearPlaneDistance
        ;   Label: LAB_0043705a
    CMP EDI,dword ptr [EDX + 0x8]       ; 00437060 | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z
    JG 0x00437067                       ; 00437063
        ;   XREF to: 00437067 (CONDITIONAL_JUMP)  ; LAB_00437067
    OR AL,0x2                           ; 00437065
    CMP EAX,0x3                         ; 00437067
        ;   Label: LAB_00437067
    JA 0x004370b8                       ; 0043706a
        ;   XREF to: 004370b8 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4366cc]  ; 0043706c | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00437073 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043707a
    ADD EDI,0x824e28                    ; 0043707f | g_ClippedVertexBuffer
    MOV ESI,EBX                         ; 00437085
    TEST EDI,0x7                        ; 00437087
    JZ 0x00437095                       ; 0043708d
        ;   XREF to: 00437095 (CONDITIONAL_JUMP)  ; LAB_00437095
    MOVSD ES:EDI,ESI                    ; 0043708f | g_ClippedVertexBuffer | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 00437090
    JLE 0x004370b2                      ; 00437093
        ;   XREF to: 004370b2 (CONDITIONAL_JUMP)  ; LAB_004370b2
    SUB ECX,0x8                         ; 00437095
        ;   Label: LAB_00437095
    JL 0x004370a6                       ; 00437098
        ;   XREF to: 004370a6 (CONDITIONAL_JUMP)  ; LAB_004370a6
    FILD qword ptr [ESI]                ; 0043709a | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z
    ADD ESI,0x8                         ; 0043709c
    FISTP qword ptr [EDI]               ; 0043709f | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    ADD EDI,0x8                         ; 004370a1
    JMP 0x00437095                      ; 004370a4
        ;   XREF to: 00437095 (UNCONDITIONAL_JUMP)  ; LAB_00437095
    ADD ECX,0x8                         ; 004370a6
        ;   Label: LAB_004370a6
    JLE 0x004370b2                      ; 004370a9
        ;   XREF to: 004370b2 (CONDITIONAL_JUMP)  ; LAB_004370b2
    MOVSD ES:EDI,ESI                    ; 004370ab | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y
    SUB ECX,0x4                         ; 004370ac
    JLE 0x004370b2                      ; 004370af
        ;   XREF to: 004370b2 (CONDITIONAL_JUMP)  ; LAB_004370b2
    MOVSD ES:EDI,ESI                    ; 004370b1 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z
    INC dword ptr [0x00824e24]          ; 004370b2 | g_ClippedVertexCount
        ;   Label: LAB_004370b2
    MOV ESI,dword ptr [ESP + 0x238]     ; 004370b8
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x008254a8]      ; 004370bf | g_SecondaryClipVertexCount
    INC ESI                             ; 004370c5
    ADD EBP,0x30                        ; 004370c6
    MOV dword ptr [ESP + 0x238],ESI     ; 004370c9
    CMP ESI,EDI                         ; 004370d0
    JGE 0x00436c50                      ; 004370d2
        ;   XREF to: 00436c50 (CONDITIONAL_JUMP)  ; LAB_00436c50
    JMP 0x00437026                      ; 004370d8
        ;   XREF to: 00437026 (UNCONDITIONAL_JUMP)  ; LAB_00437026
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 004370dd | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 004370e4 | g_ClippedVertexBuffer
    PUSH EAX                            ; 004370e9 | g_ClippedVertexBuffer
    PUSH EBX                            ; 004370ea | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_x
    PUSH EDX                            ; 004370eb
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00 ; 004370ec
        ;   XREF to: 00435e00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EBX,dword ptr [0x00824e24]      ; 004370f1 | g_ClippedVertexCount
    INC EBX                             ; 004370f7
    ADD ESP,0xc                         ; 004370f8
    MOV dword ptr [0x00824e24],EBX      ; 004370fb | g_ClippedVertexCount
    JMP 0x004370b8                      ; 00437101
        ;   XREF to: 004370b8 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00437103 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043710a
    MOV ESI,EBX                         ; 0043710f
    ADD EDI,0x824e28                    ; 00437111 | g_ClippedVertexBuffer
    TEST EDI,0x7                        ; 00437117
    JZ 0x00437125                       ; 0043711d
        ;   XREF to: 00437125 (CONDITIONAL_JUMP)  ; LAB_00437125
    MOVSD ES:EDI,ESI                    ; 0043711f | g_ClippedVertexBuffer | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_x
    SUB ECX,0x4                         ; 00437120
    JLE 0x00437142                      ; 00437123
        ;   XREF to: 00437142 (CONDITIONAL_JUMP)  ; LAB_00437142
    SUB ECX,0x8                         ; 00437125
        ;   Label: LAB_00437125
    JL 0x00437136                       ; 00437128
        ;   XREF to: 00437136 (CONDITIONAL_JUMP)  ; LAB_00437136
    FILD qword ptr [ESI]                ; 0043712a | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_x | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_y
    ADD ESI,0x8                         ; 0043712c
    FISTP qword ptr [EDI]               ; 0043712f | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z
    ADD EDI,0x8                         ; 00437131
    JMP 0x00437125                      ; 00437134
        ;   XREF to: 00437125 (UNCONDITIONAL_JUMP)  ; LAB_00437125
    ADD ECX,0x8                         ; 00437136
        ;   Label: LAB_00437136
    JLE 0x00437142                      ; 00437139
        ;   XREF to: 00437142 (CONDITIONAL_JUMP)  ; LAB_00437142
    MOVSD ES:EDI,ESI                    ; 0043713b | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y
    SUB ECX,0x4                         ; 0043713c
    JLE 0x00437142                      ; 0043713f
        ;   XREF to: 00437142 (CONDITIONAL_JUMP)  ; LAB_00437142
    MOVSD ES:EDI,ESI                    ; 00437141 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[0].projected_vertex.inv_z | g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_z
    MOV ECX,dword ptr [0x00824e24]      ; 00437142 | g_ClippedVertexCount
        ;   Label: LAB_00437142
    INC ECX                             ; 00437148
    MOV dword ptr [0x00824e24],ECX      ; 00437149 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 0043714f
    ADD EAX,0x824e28                    ; 00437152 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EAX                            ; 00437157 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EDX                            ; 00437158
    PUSH EBX                            ; 00437159 | g_SecondaryClipVertexBuffer | g_SecondaryClipVertexBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00 ; 0043715a
        ;   XREF to: 00435e00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00824e24]      ; 0043715f | g_ClippedVertexCount
    INC EDI                             ; 00437165
    ADD ESP,0xc                         ; 00437166
    MOV dword ptr [0x00824e24],EDI      ; 00437169 | g_ClippedVertexCount
    JMP 0x004370b8                      ; 0043716f
        ;   XREF to: 004370b8 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,dword ptr [EAX]             ; 00437174 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
        ;   Label: LAB_00437174
    CMP ECX,EBX                         ; 00437176
    JLE 0x00437181                      ; 00437178
        ;   XREF to: 00437181 (CONDITIONAL_JUMP)  ; LAB_00437181
    MOV dword ptr [EAX],EBX             ; 0043717a | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JMP 0x00436c81                      ; 0043717c
        ;   XREF to: 00436c81 (UNCONDITIONAL_JUMP)  ; LAB_00436c81
    NEG EBX                             ; 00437181
        ;   Label: LAB_00437181
    CMP EBX,ECX                         ; 00437183
    JLE 0x0043718e                      ; 00437185
        ;   XREF to: 0043718e (CONDITIONAL_JUMP)  ; LAB_0043718e
    MOV dword ptr [EAX],EBX             ; 00437187 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JMP 0x00436c81                      ; 00437189
        ;   XREF to: 00436c81 (UNCONDITIONAL_JUMP)  ; LAB_00436c81
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043718e | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_0043718e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00437191 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    CMP ECX,EBP                         ; 00437194
    JLE 0x004371a0                      ; 00437196
        ;   XREF to: 004371a0 (CONDITIONAL_JUMP)  ; LAB_004371a0
    MOV dword ptr [EAX + 0x4],EBP       ; 00437198 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x00436c81                      ; 0043719b
        ;   XREF to: 00436c81 (UNCONDITIONAL_JUMP)  ; LAB_00436c81
    CMP EBX,ECX                         ; 004371a0
        ;   Label: LAB_004371a0
    JLE 0x00436c81                      ; 004371a2
        ;   XREF to: 00436c81 (CONDITIONAL_JUMP)  ; LAB_00436c81
    JMP 0x00436c7e                      ; 004371a8
        ;   XREF to: 00436c7e (UNCONDITIONAL_JUMP)  ; LAB_00436c7e


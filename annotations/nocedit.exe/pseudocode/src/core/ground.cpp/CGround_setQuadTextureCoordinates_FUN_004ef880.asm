; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround * this_ptr, int column, int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
;
; XREF[1]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 at 004efa97
;
; Referenced Globals:
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 DAT_00f80000
;
; Called Functions:
;   core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef880
        ;   Label: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
    PUSH ESI                            ; 004ef881
    PUSH EDI                            ; 004ef882
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ef883
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ef887
    IMUL EAX,dword ptr [EBX]            ; 004ef88b
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ef88e
    MOV EDX,dword ptr [EBX + 0x24]      ; 004ef892
    ADD EAX,ECX                         ; 004ef895
    MOV AX,word ptr [EDX + EAX*0x4 + 0x2] ; 004ef897
    AND EAX,0xffff                      ; 004ef89c
    PUSH EAX                            ; 004ef8a1
    MOV ESI,dword ptr [EBX + 0x28]      ; 004ef8a2
    PUSH ESI                            ; 004ef8a5
    CALL core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270 ; 004ef8a6
        ;   XREF to: 005dc270 (UNCONDITIONAL_CALL)  ; void core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList * this_ptr, uint texture_index)
    MOV EDX,dword ptr [EBX + 0x50]      ; 004ef8ab
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef8ae
    SUB EAX,EDX                         ; 004ef8b5
    SHL EAX,0x4                         ; 004ef8b7
    MOV EDI,0xf80000                    ; 004ef8ba | DAT_00f80000
    MOV dword ptr [EAX + 0x68802c],EDI  ; 004ef8bf | g_RenderVertexBuffer[0].u | DAT_00f80000
    MOV EDX,dword ptr [EBX + 0x50]      ; 004ef8c5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef8c8
    SUB EAX,EDX                         ; 004ef8cf
    SHL EAX,0x4                         ; 004ef8d1
    MOV dword ptr [EAX + 0x688030],EDI  ; 004ef8d4 | g_RenderVertexBuffer[0].v | DAT_00f80000
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004ef8da
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef8dd
    SUB EAX,EDX                         ; 004ef8e4
    SHL EAX,0x4                         ; 004ef8e6
    MOV dword ptr [EAX + 0x68802c],0x80000 ; 004ef8e9 | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004ef8f3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef8f6
    SUB EAX,EDX                         ; 004ef8fd
    SHL EAX,0x4                         ; 004ef8ff
    MOV dword ptr [EAX + 0x688030],EDI  ; 004ef902 | g_RenderVertexBuffer[0].v | DAT_00f80000
    MOV EDX,dword ptr [EBX + 0x58]      ; 004ef908
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef90b
    SUB EAX,EDX                         ; 004ef912
    SHL EAX,0x4                         ; 004ef914
    MOV ESI,0x80000                     ; 004ef917
    MOV dword ptr [EAX + 0x68802c],ESI  ; 004ef91c | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EBX + 0x58]      ; 004ef922
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef925
    SUB EAX,EDX                         ; 004ef92c
    SHL EAX,0x4                         ; 004ef92e
    MOV dword ptr [EAX + 0x688030],ESI  ; 004ef931 | g_RenderVertexBuffer[0].v
    MOV EDX,dword ptr [EBX + 0x54]      ; 004ef937
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef93a
    SUB EAX,EDX                         ; 004ef941
    SHL EAX,0x4                         ; 004ef943
    MOV dword ptr [EAX + 0x68802c],EDI  ; 004ef946 | g_RenderVertexBuffer[0].u | DAT_00f80000
    MOV EDX,dword ptr [EBX + 0x54]      ; 004ef94c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef94f
    SUB EAX,EDX                         ; 004ef956
    SHL EAX,0x4                         ; 004ef958
    ADD ESP,0x8                         ; 004ef95b
    MOV dword ptr [EAX + 0x688030],ESI  ; 004ef95e | g_RenderVertexBuffer[0].v
    POP EDI                             ; 004ef964
    POP ESI                             ; 004ef965
    POP EBX                             ; 004ef966
    RET                                 ; 004ef967


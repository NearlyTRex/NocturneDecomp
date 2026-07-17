; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_10002ea0(void)
;
;
; XREF[3]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001d3d
;   dll_dx7.cpp_FUN_10003400 at 1000340a
;   dll_dx7.cpp_releaseDirectXResources_FUN_10002370 at 10002372
;
; Referenced Globals:
;   undefined4 DAT_10138f30
;   undefined4 DAT_10138f34
;   undefined4 DAT_10138f50
;   IDirectDrawSurface*[4][8] g_StagingTextures
;   undefined4 g_StagingTextures[1][0]
;   STextureSurfaceSlot[4096] g_TextureSurfaces
;   undefined4 g_TextureSurfaces[0].surface
;   undefined4 g_TextureSurfaces[1].texture
;   undefined4 g_TextureSurfaces[1].surface
;   undefined4 DAT_10215e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10002ea0
        ;   Label: dll_dx7.cpp_FUN_10002ea0
    PUSH ESI                            ; 10002ea1
    PUSH EDI                            ; 10002ea2
    XOR ESI,ESI                         ; 10002ea3
    MOV EBX,ESI                         ; 10002ea5
        ;   Label: LAB_10002ea5
    MOV EDI,0x4                         ; 10002ea7
    MOV EAX,dword ptr [EBX + 0x10138f30] ; 10002eac | DAT_10138f30 | DAT_10138f50 | DAT_10138f34
        ;   Label: LAB_10002eac
    TEST EAX,EAX                        ; 10002eb2
    JZ 0x10002ec6                       ; 10002eb4
        ;   XREF to: 10002ec6 (CONDITIONAL_JUMP)  ; LAB_10002ec6
    PUSH EAX                            ; 10002eb6
    MOV EAX,dword ptr [EAX]             ; 10002eb7
    CALL dword ptr [EAX + 0x8]          ; 10002eb9
    MOV dword ptr [EBX + 0x10138f30],0x0 ; 10002ebc | DAT_10138f30
    MOV EAX,dword ptr [EBX + 0x10139048] ; 10002ec6 | g_StagingTextures | g_StagingTextures[1][0]
        ;   Label: LAB_10002ec6
    TEST EAX,EAX                        ; 10002ecc
    JZ 0x10002ee0                       ; 10002ece
        ;   XREF to: 10002ee0 (CONDITIONAL_JUMP)  ; LAB_10002ee0
    PUSH EAX                            ; 10002ed0
    MOV EAX,dword ptr [EAX]             ; 10002ed1
    CALL dword ptr [EAX + 0x8]          ; 10002ed3
    MOV dword ptr [EBX + 0x10139048],0x0 ; 10002ed6 | g_StagingTextures
    ADD EBX,0x20                        ; 10002ee0
        ;   Label: LAB_10002ee0
    DEC EDI                             ; 10002ee3
    JNZ 0x10002eac                      ; 10002ee4
        ;   XREF to: 10002eac (CONDITIONAL_JUMP)  ; LAB_10002eac
    ADD ESI,0x4                         ; 10002ee6
    CMP ESI,0x20                        ; 10002ee9
    JL 0x10002ea5                       ; 10002eec
        ;   XREF to: 10002ea5 (CONDITIONAL_JUMP)  ; LAB_10002ea5
    MOV ESI,0x1020de40                  ; 10002eee | g_TextureSurfaces
    MOV EAX,dword ptr [ESI]             ; 10002ef3 | g_TextureSurfaces | g_TextureSurfaces[1].texture
        ;   Label: LAB_10002ef3
    TEST EAX,EAX                        ; 10002ef5
    JZ 0x10002f05                       ; 10002ef7
        ;   XREF to: 10002f05 (CONDITIONAL_JUMP)  ; LAB_10002f05
    PUSH EAX                            ; 10002ef9
    MOV EAX,dword ptr [EAX]             ; 10002efa
    CALL dword ptr [EAX + 0x8]          ; 10002efc
    MOV dword ptr [ESI],0x0             ; 10002eff | g_TextureSurfaces
    MOV EAX,dword ptr [ESI + 0x4]       ; 10002f05 | g_TextureSurfaces[0].surface | g_TextureSurfaces[1].surface
        ;   Label: LAB_10002f05
    TEST EAX,EAX                        ; 10002f08
    JZ 0x10002f19                       ; 10002f0a
        ;   XREF to: 10002f19 (CONDITIONAL_JUMP)  ; LAB_10002f19
    PUSH EAX                            ; 10002f0c
    MOV EAX,dword ptr [EAX]             ; 10002f0d
    CALL dword ptr [EAX + 0x8]          ; 10002f0f
    MOV dword ptr [ESI + 0x4],0x0       ; 10002f12 | g_TextureSurfaces[0].surface
    ADD ESI,0x8                         ; 10002f19
        ;   Label: LAB_10002f19
    CMP ESI,0x10215e40                  ; 10002f1c | DAT_10215e40
    JC 0x10002ef3                       ; 10002f22
        ;   XREF to: 10002ef3 (CONDITIONAL_JUMP)  ; LAB_10002ef3
    MOV EDI,0x1020de40                  ; 10002f24 | g_TextureSurfaces
    XOR EAX,EAX                         ; 10002f29
    MOV ECX,0x2000                      ; 10002f2b
    STOSD.REP ES:EDI                    ; 10002f30 | g_TextureSurfaces | g_TextureSurfaces[0].surface
    POP EDI                             ; 10002f32
    POP ESI                             ; 10002f33
    POP EBX                             ; 10002f34
    RET                                 ; 10002f35


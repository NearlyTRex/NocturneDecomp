; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_3d_c_qsortByRenderDepth_FUN_00407080 (SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr)
;
; Parameters:
; SRenderBufferEntry * * Stack[0x4]:4   entry1_ptr
; SRenderBufferEntry * * Stack[0x8]:4   entry2_ptr
;
; XREF[1]:
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 00407100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407080
        ;   Label: engine_3d.c_qsortByRenderDepth_FUN_00407080
    MOV EDX,dword ptr [ESP + 0x8]       ; 00407081
    MOV EAX,dword ptr [ESP + 0xc]       ; 00407085
    MOV EDX,dword ptr [EDX]             ; 00407089
    MOV EAX,dword ptr [EAX]             ; 0040708b
    MOV ECX,dword ptr [EDX + 0x114]     ; 0040708d
    MOV EBX,dword ptr [EAX + 0x114]     ; 00407093
    CMP ECX,EBX                         ; 00407099
    JL 0x004070a6                       ; 0040709b
        ;   XREF to: 004070a6 (CONDITIONAL_JUMP)  ; LAB_004070a6
    JLE 0x004070ad                      ; 0040709d
        ;   XREF to: 004070ad (CONDITIONAL_JUMP)  ; LAB_004070ad
    MOV EAX,0xffffffff                  ; 0040709f
    POP EBX                             ; 004070a4
    RET                                 ; 004070a5
    MOV EAX,0x1                         ; 004070a6
        ;   Label: LAB_004070a6
    POP EBX                             ; 004070ab
    RET                                 ; 004070ac
    XOR EAX,EAX                         ; 004070ad
        ;   Label: LAB_004070ad
    POP EBX                             ; 004070af
    RET                                 ; 004070b0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_windll_cpp_renderScanlineSaved_FUN_005b5716(void *scanline_data,int scanline_y,int render_flags)
;
; Parameters:
; void *           Stack[0x4]:4   scanline_data
; int              Stack[0x8]:4   scanline_y
; int              Stack[0xc]:4   render_flags
;
; Referenced Globals:
;   int g_SavedRegisterEAX = 0x0
;   int g_SavedRegisterEBX = 0x0
;   int g_SavedRegisterECX = 0x0
;   int g_SavedRegisterEDX = 0x0
;   RenderScanlineFunc* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b5716
        ;   Label: wincore_windll.cpp_renderScanlineSaved_FUN_005b5716
    MOV EBP,ESP                         ; 005b5717
    PUSH ESI                            ; 005b5719
    PUSH EDI                            ; 005b571a
    MOV [0x00682634],EAX                ; 005b571b | g_SavedRegisterEAX
    MOV dword ptr [0x00682638],EBX      ; 005b5720 | g_SavedRegisterEBX
    MOV dword ptr [0x0068263c],ECX      ; 005b5726 | g_SavedRegisterECX
    MOV dword ptr [0x00682640],EDX      ; 005b572c | g_SavedRegisterEDX
    MOV EBX,dword ptr [EBP + 0x8]       ; 005b5732
    MOV ESI,dword ptr [EBP + 0xc]       ; 005b5735
    MOV EDI,dword ptr [EBP + 0x10]      ; 005b5738
    CALL dword ptr [0x02d0257c]         ; 005b573b | g_ScanlineRenderFunc
    MOV EAX,[0x00682634]                ; 005b5741 | g_SavedRegisterEAX
    MOV EBX,dword ptr [0x00682638]      ; 005b5746 | g_SavedRegisterEBX
    MOV ECX,dword ptr [0x0068263c]      ; 005b574c | g_SavedRegisterECX
    MOV EDX,dword ptr [0x00682640]      ; 005b5752 | g_SavedRegisterEDX
    POP EDI                             ; 005b5758
    POP ESI                             ; 005b5759
    LEAVE                               ; 005b575a
    RET                                 ; 005b575b


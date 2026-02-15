; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596926
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051d9f1
;   shape_spotview.cpp_staticInit_FUN_005b95b0 at 005b95b5
;
; Referenced Globals:
;   float FLOAT_00684170 = 12
;   float FLOAT_00684174 = 1
;   float FLOAT_03f6ba1c
;   float FLOAT_03f6ba20
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_FUN_005b9620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b95c0
        ;   Label: shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b95c1
    FLD float ptr [0x00684170]          ; 005b95c5 | FLOAT_00684170
    FLD float ptr [0x00684174]          ; 005b95cb | FLOAT_00684174
    FLD float ptr [0x03f6ba1c]          ; 005b95d1 | FLOAT_03f6ba1c
    LEA EAX,[EBX + 0x18]                ; 005b95d7
    FLD float ptr [0x03f6ba20]          ; 005b95da | FLOAT_03f6ba20
    MOV dword ptr [EAX + 0x8],0x0       ; 005b95e0
    PUSH 0x1f                           ; 005b95e7
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b95e9
    MOV dword ptr [EAX + 0x4],EDX       ; 005b95ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b95ef
    MOV dword ptr [EAX],EDX             ; 005b95f2
    MOV dword ptr [EBX + 0x10],0x0      ; 005b95f4
    PUSH EBX                            ; 005b95fb
    FXCH ST3                            ; 005b95fc
    FSTP float ptr [EBX]                ; 005b95fe
    FXCH                                ; 005b9600
    FSTP float ptr [EBX + 0x4]          ; 005b9602
    FSTP float ptr [EBX + 0x8]          ; 005b9605
    FSTP float ptr [EBX + 0xc]          ; 005b9608
    MOV dword ptr [EBX + 0x14],0x0      ; 005b960b
    CALL shape_spotview.cpp_CSpotView_FUN_005b9620 ; 005b9612
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_FUN_005b9620(CSpotView * this_ptr)
    ADD ESP,0x8                         ; 005b9617
    MOV EAX,EBX                         ; 005b961a
    POP EBX                             ; 005b961c
    RET                                 ; 005b961d


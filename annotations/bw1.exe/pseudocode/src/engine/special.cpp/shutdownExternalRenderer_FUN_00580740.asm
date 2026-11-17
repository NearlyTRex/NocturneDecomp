; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00580740(void)
;
;
; XREF[2]:
;   engine_special.cpp_kill_FUN_00581f20 at 00581f35
;   engine_special.cpp_loadExternalRenderer_FUN_00581310 at 00581cbd
;
; Referenced Globals:
;   int g_INT_01c50948
;   void* g_PTR_02c83388
;   void* g_PTR_02c8338c
;   void* g_PTR_02c83390
;   int g_INT_02c83394
;   void* g_PTR_02c83398
;   void* g_PTR_02c8339c
;   void* g_PTR_02c833a0
;   void* g_PTR_02c833a4
;   void* g_PTR_02c833a8
;   void* g_PTR_02c833ac
;   void* g_PTR_02c833b0
;   void* g_PTR_02c833b4
;   void* g_PTR_02c833c0
;   void* g_PTR_02c833c4
;   ... and 59 more
;
; Called Functions:
;   wincore_wddvmem.cpp_freeLibrary_FUN_005ad450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580740
        ;   Label: engine_special.cpp_shutdownExternalRenderer_FUN_00580740
    PUSH EBP                            ; 00580741
    XOR EDX,EDX                         ; 00580742
    MOV EBX,dword ptr [0x02c834b0]      ; 00580744 | g_HMODULE_02c834b0
    MOV dword ptr [0x01c50948],EDX      ; 0058074a | g_INT_01c50948
    MOV dword ptr [0x02c834ac],EDX      ; 00580750 | g_INT_02c834ac
    TEST EBX,EBX                        ; 00580756
    JNZ 0x0058090d                      ; 00580758
        ;   XREF to: 0058090d (CONDITIONAL_JUMP)  ; LAB_0058090d
    XOR EBP,EBP                         ; 0058075e
        ;   Label: LAB_0058075e
    MOV dword ptr [0x02c8338c],EBP      ; 00580760 | g_PTR_02c8338c
    MOV dword ptr [0x02c83390],EBP      ; 00580766 | g_PTR_02c83390
    MOV dword ptr [0x02c83394],EBP      ; 0058076c | g_INT_02c83394
    MOV dword ptr [0x02c83398],EBP      ; 00580772 | g_PTR_02c83398
    MOV dword ptr [0x02c8339c],EBP      ; 00580778 | g_PTR_02c8339c
    MOV dword ptr [0x02c833a0],EBP      ; 0058077e | g_PTR_02c833a0
    MOV dword ptr [0x02c833a4],EBP      ; 00580784 | g_PTR_02c833a4
    MOV dword ptr [0x02c833a8],EBP      ; 0058078a | g_PTR_02c833a8
    MOV dword ptr [0x02c833ac],EBP      ; 00580790 | g_PTR_02c833ac
    MOV dword ptr [0x02c833b0],EBP      ; 00580796 | g_PTR_02c833b0
    MOV dword ptr [0x02c833b4],EBP      ; 0058079c | g_PTR_02c833b4
    MOV dword ptr [0x02c833c0],EBP      ; 005807a2 | g_PTR_02c833c0
    MOV dword ptr [0x02c833c4],EBP      ; 005807a8 | g_PTR_02c833c4
    MOV dword ptr [0x02c833c8],EBP      ; 005807ae | g_PTR_02c833c8
    MOV dword ptr [0x02c833cc],EBP      ; 005807b4 | g_PTR_02c833cc
    MOV dword ptr [0x02c833d0],EBP      ; 005807ba | g_PTR_02c833d0
    MOV dword ptr [0x02c833d4],EBP      ; 005807c0 | g_PTR_02c833d4
    MOV dword ptr [0x02c833d8],EBP      ; 005807c6 | g_PTR_02c833d8
    MOV dword ptr [0x02c833dc],EBP      ; 005807cc | g_PTR_02c833dc
    MOV dword ptr [0x02c833e0],EBP      ; 005807d2 | g_PTR_02c833e0
    MOV dword ptr [0x02c833e4],EBP      ; 005807d8 | g_PTR_02c833e4
    MOV dword ptr [0x02c833e8],EBP      ; 005807de | g_PTR_02c833e8
    MOV dword ptr [0x02c833ec],EBP      ; 005807e4 | g_PTR_02c833ec
    MOV dword ptr [0x02c833f0],EBP      ; 005807ea | g_PTR_02c833f0
    MOV dword ptr [0x02c833f4],EBP      ; 005807f0 | g_PTR_02c833f4
    MOV dword ptr [0x02c833f8],EBP      ; 005807f6 | g_PTR_02c833f8
    MOV dword ptr [0x02c833fc],EBP      ; 005807fc | g_PTR_02c833fc
    MOV dword ptr [0x02c83400],EBP      ; 00580802 | g_INT_02c83400
    MOV dword ptr [0x02c83404],EBP      ; 00580808 | g_INT_02c83404
    MOV dword ptr [0x02c83408],EBP      ; 0058080e | g_PTR_02c83408
    MOV dword ptr [0x02c8340c],EBP      ; 00580814 | g_PTR_02c8340c
    MOV dword ptr [0x02c83410],EBP      ; 0058081a | g_PTR_02c83410
    MOV dword ptr [0x02c83414],EBP      ; 00580820 | g_PTR_02c83414
    MOV dword ptr [0x02c83418],EBP      ; 00580826 | g_PTR_02c83418
    MOV dword ptr [0x02c8341c],EBP      ; 0058082c | g_PTR_02c8341c
    MOV dword ptr [0x02c83420],EBP      ; 00580832 | g_PTR_02c83420
    MOV dword ptr [0x02c83424],EBP      ; 00580838 | g_PTR_02c83424
    MOV dword ptr [0x02c83428],EBP      ; 0058083e | g_PTR_02c83428
    MOV dword ptr [0x02c8342c],EBP      ; 00580844 | g_PTR_02c8342c
    MOV dword ptr [0x02c83430],EBP      ; 0058084a | g_PTR_02c83430
    MOV dword ptr [0x02c83434],EBP      ; 00580850 | g_INT_02c83434
    MOV dword ptr [0x02c83438],EBP      ; 00580856 | g_PTR_02c83438
    MOV dword ptr [0x02c8343c],EBP      ; 0058085c | g_INT_02c8343c
    MOV dword ptr [0x02c83440],EBP      ; 00580862 | g_PTR_02c83440
    MOV dword ptr [0x02c83444],EBP      ; 00580868 | g_PTR_02c83444
    MOV dword ptr [0x02c83448],EBP      ; 0058086e | g_PTR_02c83448
    MOV dword ptr [0x02c8344c],EBP      ; 00580874 | g_PTR_02c8344c
    MOV dword ptr [0x02c83450],EBP      ; 0058087a | g_PTR_02c83450
    MOV dword ptr [0x02c83454],EBP      ; 00580880 | g_PTR_02c83454
    MOV dword ptr [0x02c83458],EBP      ; 00580886 | g_PTR_02c83458
    MOV dword ptr [0x02c8345c],EBP      ; 0058088c | g_PTR_02c8345c
    MOV dword ptr [0x02c83460],EBP      ; 00580892 | g_PTR_02c83460
    MOV dword ptr [0x02c83464],EBP      ; 00580898 | g_PTR_02c83464
    MOV dword ptr [0x02c83468],EBP      ; 0058089e | g_PTR_02c83468
    MOV dword ptr [0x02c8346c],EBP      ; 005808a4 | g_PTR_02c8346c
    MOV dword ptr [0x02c83470],EBP      ; 005808aa | g_PTR_02c83470
    MOV dword ptr [0x02c83474],EBP      ; 005808b0 | g_INT_02c83474
    MOV dword ptr [0x02c83478],EBP      ; 005808b6 | g_INT_02c83478
    MOV dword ptr [0x02c8347c],EBP      ; 005808bc | g_INT_02c8347c
    MOV dword ptr [0x02c83480],EBP      ; 005808c2 | g_PTR_02c83480
    MOV dword ptr [0x02c83484],EBP      ; 005808c8 | g_PTR_02c83484
    MOV dword ptr [0x02c83488],EBP      ; 005808ce | g_PTR_02c83488
    MOV dword ptr [0x02c8348c],EBP      ; 005808d4 | g_PTR_02c8348c
    MOV dword ptr [0x02c83490],EBP      ; 005808da | g_INT_02c83490
    MOV dword ptr [0x02c83494],EBP      ; 005808e0 | g_PTR_02c83494
    MOV dword ptr [0x02c83498],EBP      ; 005808e6 | g_PTR_02c83498
    MOV dword ptr [0x02c8349c],EBP      ; 005808ec | g_PTR_02c8349c
    MOV dword ptr [0x02c834a0],EBP      ; 005808f2 | g_PTR_02c834a0
    MOV dword ptr [0x02c834a4],EBP      ; 005808f8 | g_PTR_02c834a4
    MOV dword ptr [0x02c834a8],EBP      ; 005808fe | g_PTR_02c834a8
    MOV dword ptr [0x02c83388],EBP      ; 00580904 | g_PTR_02c83388
    POP EBP                             ; 0058090a
    POP EBX                             ; 0058090b
    RET                                 ; 0058090c
    PUSH EDI                            ; 0058090d
        ;   Label: LAB_0058090d
    PUSH EBX                            ; 0058090e
    CALL wincore_wddvmem.cpp_freeLibrary_FUN_005ad450 ; 0058090f
        ;   XREF to: 005ad450 (UNCONDITIONAL_CALL)  ; BOOL wincore_wddvmem.cpp_freeLibrary_FUN_005ad450(HMODULE hLibModule)
    XOR EDI,EDI                         ; 00580914
    ADD ESP,0x4                         ; 00580916
    MOV dword ptr [0x02c834b0],EDI      ; 00580919 | g_HMODULE_02c834b0
    POP EDI                             ; 0058091f
    JMP 0x0058075e                      ; 00580920
        ;   XREF to: 0058075e (UNCONDITIONAL_JUMP)  ; LAB_0058075e


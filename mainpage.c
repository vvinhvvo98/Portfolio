/**
 * @file mainpage.c
 * @brief PORTFOLIO MAINPAGE
 */

/**
 * @mainpage
 *
 *
 * @section secs_1 BACKGROUND
 * Thank you for visiting my portfolio webpage. My name is Vinh Vo, and I hold MS in Mechanical Engineering with a concentration in Mechatronics.
 *
 * This website showcases the culmination of my academic and professional efforts as a Mechanical Engineering student at Cal Poly. It features a diverse range of projects, including personal mechatronics projects, senior projects at Cal Poly, and those undertaken during my internships.
 *
 * While the website provides comprehensive details about each project, I encourage you to explore any linked external resources for a deeper understanding. Additionally, my YouTube channel features videos that bring these projects to life.
 * 
 * @section sec_info PERSONAL INFORMATION
 * <div style="display: flex; align-items: flex-start;">
 *   <div>
 *     <img src="headshot.png" alt="Profile Picture" style="width: 300px; border: 10px solid black; border-radius: 50px;">
 *   </div>
 *   <div style="margin-left: 20px;">
 *     <pre>
 *     <b>Name:</b>          VINH VO
 * 
 *     <b>Email:</b>         vinhvo.career@gmail.com
 * 
 *     <b>LinkedIn:</b>      https://www.linkedin.com/in/vinhvo98/
 * 
 *     <b>Youtube:</b>       https://www.youtube.com/channel/UCh_4F4CJVqvAhHmCMTvIb-w
 * 
 *     <b>Github:</b>        https://github.com/vvinhvvo98
 * 
 *     <b>Phone:</b>         +1(714)-988-5363
 * 
 *     <b>Major:</b>         Mechanical Engineer at Cal Poly San Luis Obispo
 * 
 *     <b>Date:</b>          May 25, 2024
 *     </pre>
 *   </div>
 * </div>
 * 
 * 
 * @section secs_2 MECHATRONIC PROJECTS
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">BASKETBALL LAUNCHER</b>
 * 
 * <img src="launcher.jpeg" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <div style="display: flex; justify-content: center; gap: 20px;">
 *   <a href="https://vvinhvvo98.github.io/Basketball-Launcher/index.html">
 *     <img src="link.png" alt="Second Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 *   <a href="https://www.youtube.com/playlist?list=PLlT9z-PWNXdP43BUYpBcqznBU4_-Bkpg8">
 *     <img src="youtube.png" alt="Third Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Developed a basketball launcher with 2 DOF, controlled wirelessly by a glove with an IMU sensor. <br> - Designed a custom PCB centered around a chosen MCU. <br> - Integrated limit switches and an emergency stop to address safety concerns. <br> - Implemented 3D printed cycloidal gearbox as the foundation for the launcher. </TD>
 *     <TD> - Used Fushion 360 to developed customized PCBA centered by STM32F411CEU6 MCU<br> - Used HC-05 bluetooth module to wirelessly control the launcher with IMU sensor<br> - Used SolidWorks to develop CAD model<br> - Used 2 NEMA 17 stepper motors with gearbox to control 2 DOFs of motions<br> - Used 2 D4215 BLDC motor to lauch bal. </TD>
 *     <TD> - Successfully launch the basketball 5 m away from the barrel<br> - The launcher motions is controlled according to feedback data from IMU sensor on the controller<br> - PCBA is manufatured and soldered<br> - The launcher has a robust foundation that is including the 3D printed cycloidal gearbox</TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 *  
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">ROMI TWO-WHEEL ROBOT</b>
 * 
 * <img src="romi.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <div style="display: flex; justify-content: center; gap: 20px;">
 *   <a href="https://vvinhvvo98.github.io/ROMI-Two-Wheels-Robot/index.html">
 *     <img src="link.png" alt="Second Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 *   <a href="https://www.youtube.com/playlist?list=PLlT9z-PWNXdNjwoyCqrZTsPmyriopg6Mu">
 *     <img src="youtube.png" alt="Third Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Integrated ROMI kit with Nucleo STM32 Microcontroller <br> -Be able to detect curve, cross, dash and 90° turn line pattern <br> -Be able to avoid a wall obstacle on the way<br> -Be able to return exact Home location<br> -Complete the challenge as fast as it can for competition. </TD>
 *     <TD> - Integrate PID controller for 2 wheels that can drive at desire speed <br> - Integrate PID controller to analog line sensor to smoothly follow different line curve<br> - Integrate IMU sensor that will read the and remember the yaw angle and XY coordinate<br> - Integrate DC servo and Ultrasonic sensor to detect wall obstacle along the path. </TD>
 *     <TD> - The robot is able to:<br> - Follow any combination of curve, cross, dash, and straight line<br> - Avoid wall with any wall size<br> - Return to Home position within ±5 mm<br> - Finish the whole challenge in 32 second
</TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">CARD DEALER ROBOT</b>
 * 
 * <img src="card.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <div style="display: flex; justify-content: center; gap: 20px;">
 *   <a href="https://vvinhvvo98.github.io/Card-Dealer-Robot/index.html">
 *     <img src="link.png" alt="Second Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 *   <a href="https://www.youtube.com/playlist?list=PLlT9z-PWNXdPdNyG8XZUSzmCKlZkHHBCw">
 *     <img src="youtube.png" alt="Third Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Develop an accurate and programmable dealer robot.<br> - Enable automated card dealing for various games.<br> - Enhance gaming experience through precision, speed, and customization.</TD>
 *     <TD> - Create an internal gear and pinion mechanism with a precision stepper motor for controlled spinning. <br> - Design a customized PCB for an enhanced aesthetic appeal. <br> - Craft a coded script to offer game flexibility and choice.</TD>
 *     <TD> - The robot handles variable player and card combinations effortlessly. <br> - Achieves a spinning speed of 100 rpm. <br> - Features built-in games such as Big 2, Blackjack, Baccarat, and Poker.</TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">SNAKE-LIKE ROBOTIC ARM</b>
 * 
 * <img src="snake.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 *
 * <div style="display: flex; justify-content: center; gap: 20px;">
 *   <a href="https://www.youtube.com/playlist?list=PLlT9z-PWNXdOYJSFjVa3emhBHUZVUPtFF">
 *     <img src="youtube.png" alt="Third Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Building a Snake-like robotics arm system. <br> - Include 3 45° offset swivel joints per segment for 3 degree of freedom. <br> - Implement forward and inverse kinematics for precise movement control.<br> - Utilize MATLAB App for arm manipulation. </TD>
 *     <TD> - Design 3D swivel joints in Solidworks with DC motor, shaft encoder, and 1:3 gear ratio. <br> - Analyze forward and inverse kinematics with DH parameters. <br> - Use MATLAB for workspace plotting and angle-based joint animation. <br> - Prevent arm damage by analyzing singularity through the Jacobian matrix. </TD>
 *     <TD> - Arm operates effectively with implemented forward and inverse kinematics. <br> - Successfully create MATLAB App GUI for inputs kinematics parameters. <br> - Serial communication links MATLAB GUI and Arduino for arm motion control. </TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">CYCLOIDAL GEARBOX</b>
 * 
 * <img src="gearbox.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <div style="display: flex; justify-content: center; gap: 20px;">
 *   <a href="https://www.youtube.com/playlist?list=PLlT9z-PWNXdMvf3wya2C2y9n_Qta7UkEB">
 *     <img src="youtube.png" alt="Third Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Design a robust cycloidal 1:10 gearbox for future projects. <br> - Easy to install to any motor input and driven output with strong connection. <br> - Components are 3D printed and purchased as needed. </TD>
 *     <TD> - Ultilize MATLAB for developingg a tool for desired cycloidal disk profile as well as critical dimentions of the design.<br> - Running MATLAB animation to make sure no interference between components. <br> - Using Solidworks to design the gearbox and implement dimensions from MATLAB script's. </TD>
 *     <TD> - Gearbox is built by 3D printed PLA with 1:10 gear ratio. <br> - Gearbox is driven by NEMA Stepper Motor. </TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * @section secs_3 CAL POLY SENIOR PROJECT
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">PATH OF LIGHT & SOUND</b>
 * 
 * <img src="tile.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <div style="display: flex; justify-content: center; gap: 20px;">
 *  <a href="W15.pdf">
 *     <img src="pdf.png" alt="First Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 *   <a href="https://www.youtube.com/playlist?list=PLlT9z-PWNXdOEd7qTQGlaQwPQV6c5Uug_">
 *     <img src="youtube.png" alt="Third Picture" style="width: 150px; height: 150px; border: 10px solid black; border-radius: 50px;">
 *   </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Create a light-up, musical path that is interactive for a themed Christmas event <br> - Capable of supporting children and adults (up to 300 lbf)<br> - Manufacture 25 tiles play Jingle Bells <br> - Programmable LED lights and sounds </TD>
 *     <TD> - White HDPE on top for light diffusion.<br> - Using 8 UHMW rods for supporting weight.<br> - Aluminum 90° angle frame.<br> - Limit switches activated.<br> - Raspberry Pi Pico microcontroller with UART communication bewteen tiles. </TD>
 *     <TD> - Manufatured 25 tiles that can play 25 different notes (Jingle Bells) for Christmast.<br> - The tile can witstand more than 300 lbs of force without buckling.<br> - Including a GUI software that can program all 25 tiles with different colors and songs. </TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * @section secs_4 INTERNSHIP PROJECTS
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">HORN HOUSING PRESS FIXTURE</b>
 * 
 * <img src="horn.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - GX module sub-assembly needs 3 press-fit operations for ball bearings and worm gear.<br> - Design press fixture to replace manual press with Schmidt Electric Press for efficiency.<br> - Conduct IOPQ assessment to gauge quality of new SOP implementation. </TD>
 *     <TD> - Use SolidWorks for press fixture design. <br> - Apply Tolerance Analysis and GD&T techniques to enhance pressing quality. <br> - Incorporate a .04 inches inspection gauge for convenient validation. </TD>
 *     <TD> - Achieve 100% passing rate within subassembly's specs.<br> - Eliminated the need for over 4kN hand-press for operators.<br> - Cut operation time to 30% compare to prior SOP.<br> - IOPQ and SOP developed. </TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">DOOR ASSEMBLY FIXTURE</b>
 * 
 * <img src="door.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Revise Assembly GX's Door fixture for new generation. <br> - Guarantee Door quality and consistency. <br> - Prevent ball bearing and spring dislodgement. <br> - Prevent operators to damage assembly's components. </TD>
 *     <TD> - Revise assembly fixture using SolidWorks including a Calibration Tool to ensure the right assemble distance so that protect ball bearing and spring from being damaged. </TD>
 *     <TD> - GX's Door Fixture is revised with new feature to improve safety and prevent potential failure to the assembly. </TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">WALL MOUNTING BRACKET</b>
 * 
 * <img src="wall.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Developed Secure and User-Friendly Wall Mount Bracket for Talia™: People Aware Sensor <br> - Featured with a 55° angle; easily detachable and capable of withstanding 1-hour random abusive vibration test. </TD>
 *     <TD> - Used SolidWorks to develop the bracket. <br> - Ensured the bracket was designed for the injection molding process. <br>- Included a rotating slot locking mechanism. </TD>
 *     <TD> - The design was able to withstand more than 1 hours inside vibration testing chamber without any external fastener between device and its bracket. </TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 * 
 * <div class="image-frame" style="text-align: center;">
 * <b style="font-size: 20px;">BUS MOUNTING BRACKET</b>
 * 
 * <img src="bus.png" width="600" height="700" style="border: 10px solid black; border-radius: 50px;">
 * </a>
 * </div>
 * 
 * <TABLE>
 * <THEAD>
 *   <TR>
 *     <TH>Ojective</TH>
 *     <TH>Technical Detail</TH>
 *     <TH>Result</TH>
 *   </TR>
 * </THEAD>
 * <TBODY>
 *   <TR>
 *     <TD> - Design a robust bracket for Talia™: People Aware Sensor, optimized for secure bus installation <br> - The bracket with a 55° angle that is both detachable and sturdy enough to withstand a 12-hour random abusive vibration test </TD>
 *     <TD> - Used SolidWorks' Sheet Metal Design for the bracket's development <br> - Incorporated a rotating slot for device placement and a U-bracket for external security </TD>
 *     <TD> - The design was able to withstand more than 12 hours inside vibration testing chamber.</TD>
 *   </TR>
 * </TBODY>
 * </TABLE>
 * 
 * <br> <br>
 */

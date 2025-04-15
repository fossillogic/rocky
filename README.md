# **Rocky Tides the Rock, Paper, Scissors Game**

**Rocky Tides** is a thrilling multiplayer Rock, Paper, Scissors game designed to test your reflexes and strategy on the turbulent shores of competition. With up to four players, each choice—Rock, Paper, or Scissors—carries the weight of the tides, as the game’s outcome will determine who stands victorious or gets swept away by the waves of defeat. Whether you're battling one-on-one or in a free-for-all, **Rocky Tides** offers a fun and fast-paced challenge for friends and rivals alike. Dive into the stormy waters, make your choice, and let the tides of fate decide your destiny!

## **Prerequisites**

Ensure you have the following installed before starting:

- **Meson Build System**: This project relies on Meson. For installation instructions, visit the official [Meson website](https://mesonbuild.com/Getting-meson.html).

## **Setting Up Meson Build**

1. **Install Meson**:
    - Follow the installation guide on the [Meson website](https://mesonbuild.com/Getting-meson.html) for your operating system.

## **Setting Up, Compiling, Installing, and Running the Project**

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/fossillogic/rocky.git
    cd rocky
    ```

2. **Configure the Build**:

    ```sh
    meson setup builddir
    ```

3. **Compile the Project**:

    ```sh
    meson compile -C builddir
    ```

4. **Install the Project**:

    ```sh
    meson install -C builddir
    ```

5. **Run the Project**:

    ```sh
    rocky
    ```

## **Contributing**

Interested in contributing? Please open pull requests or create issues on the [GitHub repository](https://github.com/fossillogic/rocky).

## **Feedback and Support**

For issues, questions, or feedback, open an issue on the [GitHub repository](https://github.com/fossillogic/rocky/issues).

## **License**

This project is licensed under the [Mozilla Public License](LICENSE).
